#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Deque.h"
#include "EFuelMagazine.h"
#include "FuelPriceUpdatedDelegate.h"
#include "FuelSellPriceData.h"
#include "TimeStruct.h"
#include "TrafficEventData.h"
#include "TrafficEventsUpdatedDelegate.h"
#include "TrafficImpactUpdatedDelegate.h"
#include "UnlockableGameplayStuffState.h"
#include "TrafficManagerSubsystem.generated.h"

class ADecorationBase;
class UObject;

UCLASS(Blueprintable)
class GSS2_API UTrafficManagerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrafficImpactUpdated OnTrafficImpactUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrafficEventsUpdated OnTrafficEventsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFuelPriceUpdated OnFuelPriceUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTrafficEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct CurrentTrafficEventStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpcomingTrafficEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct UpcomingTrafficEventStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDeque CompletedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFuelSellPriceData> FuelSellPrices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADecorationBase*> SeasonalDecorations;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct CurrentEventTimeLeftTmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct UpcomingEventTimeLeftTmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct CurrentUpdatedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct LastUpdatedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct LastUpdatedTimeDifference;
    
public:
    UTrafficManagerSubsystem();

    UFUNCTION(BlueprintCallable)
    void ValidateEvents();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentTrafficImpact();
    
    UFUNCTION(BlueprintCallable)
    void TryScheduleNextTrafficEvent();
    
    UFUNCTION(BlueprintCallable)
    void StartSpecificEvent(FName RowName);
    
    UFUNCTION(BlueprintCallable)
    void SetFuelSellPrice(EFuelMagazine FuelType, float NewPrice, bool BroadcastUpdate, UObject* ActionInstigator);
    
private:
    UFUNCTION(BlueprintCallable)
    void PopulateDefaultFuelSellPrices();
    
    UFUNCTION(BlueprintCallable)
    void OnWorldBeginPlay();
    
    UFUNCTION(BlueprintCallable)
    void OnNewGameplayStuffUnlockStateChanged(FUnlockableGameplayStuffState GameplayStuffUnlocked);
    
    UFUNCTION(BlueprintCallable)
    void OnMovableDecorationRemoved(ADecorationBase* DecorationRemoved);
    
    UFUNCTION(BlueprintCallable)
    void OnMovableDecorationPlaced(ADecorationBase* DecorationPlaced);
    
    UFUNCTION(BlueprintCallable)
    void OnGameTimeUpdated(FTimeStruct UpdatedTime);
    
    UFUNCTION(BlueprintCallable)
    void OnGameLoaded(bool GameLoaded);
    
    UFUNCTION(BlueprintCallable)
    void InitTrafficEvents();
    
public:
    UFUNCTION(BlueprintCallable)
    FTimeStruct GetUpcomingEventTimeLeft();
    
    UFUNCTION(BlueprintCallable)
    bool GetUpcomingEventData(FTrafficEventData& CurrentData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFuelSellPrice(EFuelMagazine FuelType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentTotalTrafficImpact();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentSeasonalDecorationImpact();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentPopularityTrafficImpact();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentLandmarkTrafficImpact();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentHourTrafficImpact();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentFuelPriceTrafficImpact();
    
    UFUNCTION(BlueprintCallable)
    FTimeStruct GetCurrentEventTimeLeft();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentEventImpact();
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentEventData(FTrafficEventData& CurrentData);
    
    UFUNCTION(BlueprintCallable)
    void FinishCurrentEventEarly();
    
private:
    UFUNCTION(BlueprintCallable)
    void EndCurrentEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginUpcommingEvent();
    
};

