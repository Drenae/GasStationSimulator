#pragma once
#include "CoreMinimal.h"
#include "EProductArray.h"
#include "ProductAmount.generated.h"

USTRUCT(BlueprintType)
struct FProductAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProductArray ArrayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomAmountMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomAmountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PopularityPerOneItem;
    
    GSS2_API FProductAmount();
};

