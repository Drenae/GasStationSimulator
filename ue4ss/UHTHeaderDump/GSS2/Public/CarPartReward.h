#pragma once
#include "CoreMinimal.h"
#include "CarPartBasicInformation.h"
#include "EJunkyardCarPartType.h"
#include "EJunkyardPartRarity.h"
#include "CarPartReward.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FCarPartReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardCarPartType CarPartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarPartBasicInformation Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardPartRarity Tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlockedVisibility;
    
    FCarPartReward();
};

