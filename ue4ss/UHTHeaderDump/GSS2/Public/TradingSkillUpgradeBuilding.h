#pragma once
#include "CoreMinimal.h"
#include "EBuildingType.h"
#include "TradingSkillUpgradeBuilding.generated.h"

USTRUCT(BlueprintType)
struct FTradingSkillUpgradeBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingType BuldingNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuildingLevelNeeded;
    
    GSS2_API FTradingSkillUpgradeBuilding();
};

