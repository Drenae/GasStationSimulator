#pragma once
#include "CoreMinimal.h"
#include "ETradingSkill.h"
#include "TradingSkillUpgradeBuilding.h"
#include "TradingSkill.generated.h"

USTRUCT(BlueprintType)
struct FTradingSkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETradingSkill TradingSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTradingSkillUpgradeBuilding> BuildingsNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CooldownTimeSeconds;
    
    GSS2_API FTradingSkill();
};

