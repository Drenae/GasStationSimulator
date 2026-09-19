#pragma once
#include "CoreMinimal.h"
#include "EEconomyType.generated.h"

UENUM(BlueprintType)
enum class EEconomyType : uint8 {
    CASH_SHOP_PRODUCT,
    GARAGE_PRODUCT,
    MAX,
};

