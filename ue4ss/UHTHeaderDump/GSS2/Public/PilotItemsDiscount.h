#pragma once
#include "CoreMinimal.h"
#include "PilotItemsDiscount.generated.h"

USTRUCT(BlueprintType)
struct FPilotItemsDiscount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TradingValueIncreaseOrDecrease;
    
    GSS2_API FPilotItemsDiscount();
};

