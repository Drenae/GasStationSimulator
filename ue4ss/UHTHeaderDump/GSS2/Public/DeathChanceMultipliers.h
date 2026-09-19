#pragma once
#include "CoreMinimal.h"
#include "DeathChanceMultipliers.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FDeathChanceMultipliers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDurabilityValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDurabilityValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathChanceMultiplayer;
    
    FDeathChanceMultipliers();
};

