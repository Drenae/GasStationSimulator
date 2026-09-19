#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CarWashDesignerSettings.h"
#include "House.h"
#include "OnCarWashPressureGoodAgainDelegate.h"
#include "OnCarWashPressureLowDelegate.h"
#include "OnCarWashPressureUpdatedDelegate.h"
#include "CarWash.generated.h"

class ACarWashTrash;
class ACarWashTrashVolume;

UCLASS(Blueprintable)
class GSS2_API ACarWash : public AHouse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoneyPerCarWashed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoneyPerCarWashedAutomatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressureLossPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingWaterPressure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutomaticCarWashPressureCostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<ACarWashTrash>> TrashItemsToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarWashDesignerSettings> WaterPressureLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CanSpawnTrashTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstCustomerServed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressureSinceLastSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACarWashTrashVolume* CarWashTrashVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousWaterPressureValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentWaterPressure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMaximumWaterPressure;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCarWashPressureUpdated OnCarWashPressureUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCarWashPressureLow OnCarWashPressureLow;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCarWashPressureGoodAgain OnCarWashPressureGoodAgain;
    
public:
    ACarWash(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StationUpgraded(const int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    void SpawnTrash();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWaterPressure(float NewValue);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupCarwashPathPoints();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupAutomaticCarWash(int32 ActorLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetPressureSinceLastSpawn(float NewValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTrashRemovedFromPump(int32 TrashChange, int32 Count);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LowPressureNotification();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutomaticUnlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaterPressurePercentage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPresssureSinceTrash();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaximumWaterPressure();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentWaterPressure();
    
    UFUNCTION(BlueprintCallable)
    void CarWashUsageNotification(float DeltaTime);
    
};

