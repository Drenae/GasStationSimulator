#pragma once
#include "CoreMinimal.h"
#include "EJunkyardPartRarity.h"
#include "CarPartTierModels.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FCarPartTierModels {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardPartRarity Tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Model;
    
    FCarPartTierModels();
};

