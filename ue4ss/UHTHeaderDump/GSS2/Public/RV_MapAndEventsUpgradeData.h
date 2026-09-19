#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "MapIndependentBuildingSublevels.h"
#include "ParkingsUpgradeLevels.h"
#include "RV_MapAndEventsUpgradeData.generated.h"

UCLASS(Blueprintable)
class GSS2_API URV_MapAndEventsUpgradeData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapIndependentBuildingSublevels> CousinHouseUpgradeLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapIndependentBuildingSublevels> ConcertUpgradeLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMapIndependentBuildingSublevels> ServicesUpgradeLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParkingsUpgradeLevels> ParkingUpgradeLevels;
    
    URV_MapAndEventsUpgradeData();

};

