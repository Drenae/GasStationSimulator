#pragma once
#include "CoreMinimal.h"
#include "CargoRevealPercentage.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FCargoRevealPercentage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentStageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentStagePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CargoBarPercentage;
    
    FCargoRevealPercentage();
};

