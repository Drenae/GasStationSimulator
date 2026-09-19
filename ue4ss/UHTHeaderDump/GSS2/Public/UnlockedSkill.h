#pragma once
#include "CoreMinimal.h"
#include "ETradingSkill.h"
#include "UnlockedSkill.generated.h"

USTRUCT(BlueprintType)
struct FUnlockedSkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETradingSkill TradingSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CooldownTimeSeconds;
    
    GSS2_API FUnlockedSkill();
};

