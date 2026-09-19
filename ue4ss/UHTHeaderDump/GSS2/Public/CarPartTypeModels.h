#pragma once
#include "CoreMinimal.h"
#include "CarPartTierModels.h"
#include "EJunkyardCarPartType.h"
#include "CarPartTypeModels.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FCarPartTypeModels {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardCarPartType CarPartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarPartTierModels> AvailableCarPartTiers;
    
    FCarPartTypeModels();
};

