#pragma once
#include "CoreMinimal.h"
#include "StateLevelDriverData.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FStateLevelDriverData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContractPointsCost;
    
    FStateLevelDriverData();
};

