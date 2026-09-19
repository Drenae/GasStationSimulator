#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EVehicleSpawnType.h"
#include "TimeStruct.h"
#include "TrafficEventData.h"
#include "TrafficImpactToSpawnTime.h"
#include "TrafficSettings.generated.h"

class ADecorationBase;
class UDataTable;
class UObject;

UCLASS(Blueprintable)
class GSS2_API UTrafficSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrafficImpact2ArrowsTreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrafficImpact3ArrowsTreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FuelPriceDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HourImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PopularityImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LandmarkImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADecorationBase> SeasonalDecoration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DecorationImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TrafficEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDaysBetweenEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDaysBetweenEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoursBeforeUpcomingEventIsSeen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TrafficImpactToSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TrafficEventsUnlockTag;
    
    UTrafficSettings();

    UFUNCTION(BlueprintCallable)
    FTimeStruct SubtractTime(FTimeStruct StartTime, FTimeStruct MinusTime, bool& ReachedZero);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTrafficImpactByIntegerValue(UDataTable* DataTable, int32 Value, bool IsLooping);
    
    UFUNCTION(BlueprintCallable)
    void GetTafficImpactLimitsInDataTable(UDataTable* DataTable, int32& MinTafficImpact, int32& MaxTafficImpact);
    
    UFUNCTION(BlueprintCallable)
    void GetTafficImpactLimits(int32& MinTafficImpact, int32& MaxTafficImpact, bool InlcudeEvents);
    
    UFUNCTION(BlueprintCallable)
    void GetSpawnTimes(int32 CurrentTrafficImpact, float& MinSpawnTime, float& MaxSpawnTime, EVehicleSpawnType SpawnType);
    
    UFUNCTION(BlueprintCallable)
    FTrafficImpactToSpawnTime GetSpawnTimeByTrafficImpact(int32 CurrentTrafficImpact);
    
    UFUNCTION(BlueprintCallable)
    void GetFuelTrafficImpactLimitsInDataTable(int32& MinTafficImpact, int32& MaxTafficImpact);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    int32 GetFuelPriceTrafficImpact(UObject* WorldContextObject, float CurrentFuelPrice);
    
    UFUNCTION(BlueprintCallable)
    void GetEventsImpactLimits(int32& MinTafficImpact, int32& MaxTafficImpact);
    
    UFUNCTION(BlueprintCallable)
    FTrafficEventData GetEventDataByID(int32 EventId, bool& EventFound);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDisplayArrowAmount(int32 TrafficImpact);
    
};

