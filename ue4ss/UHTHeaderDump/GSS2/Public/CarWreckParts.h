#pragma once
#include "CoreMinimal.h"
#include "CarPartTypeModels.h"
#include "EJunkyardCarWreckType.h"
#include "CarWreckParts.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FCarWreckParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EJunkyardCarWreckType CarType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarPartTypeModels> AvailableCarParts;
    
    FCarWreckParts();
};

