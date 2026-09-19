#pragma once
#include "CoreMinimal.h"
#include "EProductCashShopState.generated.h"

UENUM(BlueprintType)
enum class EProductCashShopState : uint8 {
    TO_SCAN,
    ON_BELT,
    SCANNED,
    MAX,
};

