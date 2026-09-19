#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DeathChanceMultipliers.h"
#include "DurabilityLevelIcons.h"
#include "RentalServiceValues.generated.h"

class ARentableItem;
class UMaterialInstance;
class UStaticMesh;
class UTexture2D;

UCLASS(Blueprintable)
class GSS2_API URentalServiceValues : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinRentalDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRentalDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ARentableItem> CompatibleItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultipleEqDurabilityStages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDurabilityLevelIcons> EqDuraibilityLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DefaultEqDurabilityIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDurabilityLevelIcons WornOutEqLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipmentDurabilityDownValuePerSetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EquipmentDurabilityDownPerSetSecondsValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RentalServicePriceUpValuePerSetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RentalServicePriceUpPerSetSecondsValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCustomersInQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeathChanceMultipliers> DeathChanceMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> EquipmentShelvesMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> Equipment_SMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMaterialInstance>> Equipment_MIs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> EmptyRentalSpotMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MaxCapacityPerLvl;
    
    URentalServiceValues();

    UFUNCTION(BlueprintCallable)
    int32 RandomRentingDuration();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UStaticMesh> RandomEquipmentMesh();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UMaterialInstance> RandomEquipmentMaterial();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxContainerCapacity(int32 CurrentBuildingLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetItemIcon(float Durability);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeathChanceMultiplier(float CurrentEqDurability);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDeathChance(float CurrentEqDurability);
    
};

