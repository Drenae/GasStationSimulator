#pragma once
#include "CoreMinimal.h"
#include "CarPartData.h"
#include "ContractCarPartRequirement.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FContractCarPartRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> CarPartModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarPartData Stats;
    
    FContractCarPartRequirement();
};

