#pragma once
#include "CoreMinimal.h"
#include "EProductVectorPointType.generated.h"

UENUM(BlueprintType)
enum class EProductVectorPointType : uint8 {
    BUY_PRICE,
    SELL_PRICE,
    AVG_PRICE,
    MAX,
};

