#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "AirplaneSetDelegate.h"
#include "ERunway.h"
#include "ExtraTimeSkillFinishedDelegate.h"
#include "ExtraTimeSkillUsedDelegate.h"
#include "NewItemRevealedDelegate.h"
#include "NewPlaneEntryDelegate.h"
#include "OnScheduleUpdatedDelegate.h"
#include "PlaneEntry.h"
#include "RunwayEntriesSetDelegate.h"
#include "Runway.generated.h"

class AFuelStation;
class ATradingAirplane;

UCLASS(Blueprintable)
class GSS2_API ARunway : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunwayEntriesSet OnRunwayEntriesSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewPlaneEntry OnNewPlaneEntry;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScheduleUpdated OnScheduleUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirplaneSet OnAirplaneSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewItemRevealed OnNewItemRevealed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExtraTimeSkillUsed OnExtraTimeSkillUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExtraTimeSkillFinished OnExtraTimeSkillFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERunway RunwayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AirportLevelToUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaneEntry> RunwaySchedule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AFuelStation> FuelStationReference;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATradingAirplane* CurrentAirplaneLanded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtraTimeUsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtraTimeLeft;
    
public:
    ARunway(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowCreatedEntryItems(int32 PlaneIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraTimeUsed(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraTimeLeft(int32 TimeToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAirplaneLanded(ATradingAirplane* AirplaneToSet);
    
    UFUNCTION(BlueprintCallable)
    bool GetExtraTimeUsed();
    
    UFUNCTION(BlueprintCallable)
    int32 GetExtraTimeLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATradingAirplane* GetCurrentAirplaneLanded();
    
    UFUNCTION(BlueprintCallable)
    void CheckIfAllItemsLoaded(TArray<FSoftObjectPath> ItemsToLoad, int32 NumberOfEntriesCreated);
    
    UFUNCTION(BlueprintCallable)
    void CargoItemsLoaded(FPlaneEntry PlaneEntry, int32 ItemIndex);
    
    UFUNCTION(BlueprintCallable)
    void AllItemsNeededLoaded(int32 NumberOfEntriesCreated);
    
};

