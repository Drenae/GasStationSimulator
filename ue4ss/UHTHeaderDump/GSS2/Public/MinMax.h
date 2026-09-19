#pragma once
#include "CoreMinimal.h"
#include "MinMax.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FMinMax {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirtRemove;
    
    FMinMax();
};

