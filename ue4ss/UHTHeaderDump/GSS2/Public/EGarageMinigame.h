#pragma once
#include "CoreMinimal.h"
#include "EGarageMinigame.generated.h"

UENUM(BlueprintType)
enum class EGarageMinigame : uint8 {
    WHEEL_REPLACE,
    MIRROR,
    SCRATCH_REMOVER,
    OIL_CHECK,
    BATTERY_CHECK,
    COOLANT_CHECK,
    SPARKPLUG_CHECK,
    MAX,
};

