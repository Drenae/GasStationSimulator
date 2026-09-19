#pragma once
#include "CoreMinimal.h"
#include "EWorkerWorkType.generated.h"

UENUM(BlueprintType)
enum class EWorkerWorkType : uint8 {
    FUEL,
    REPAIR,
    CLEANING,
    CASH_REGISTER,
    ICE_CREAM_VENDING,
    CINEMA,
    RESTOCK_SHELVES,
    MAX,
};

