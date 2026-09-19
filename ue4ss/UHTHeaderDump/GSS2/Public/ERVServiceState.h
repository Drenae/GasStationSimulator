#pragma once
#include "CoreMinimal.h"
#include "ERVServiceState.generated.h"

UENUM(BlueprintType)
enum class ERVServiceState : uint8 {
    NORMAL,
    LOCKED,
    COMPLETED,
    AUTOMATED,
    AUTOMATED_UNPAID,
    MAX,
};

