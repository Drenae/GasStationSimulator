#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EBuildingType.h"
#include "DA_BuildingUpgrades.generated.h"

class UDA_SpecificBuildingUpgrade;

UCLASS(Blueprintable)
class GSS2_API UDA_BuildingUpgrades : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDA_SpecificBuildingUpgrade*> BuildingUpgrades;
    
    UDA_BuildingUpgrades();

    UFUNCTION(BlueprintCallable)
    UDA_SpecificBuildingUpgrade* GetUpgradesByBuildingType(const EBuildingType BuildingType);
    
};

