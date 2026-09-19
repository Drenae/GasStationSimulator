#pragma once
#include "CoreMinimal.h"
#include "EJunkyardCarPartType.h"
#include "DifferentColorCarParts.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FDifferentColorCarParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EJunkyardCarPartType> CarParts;
    
    FDifferentColorCarParts();
};

