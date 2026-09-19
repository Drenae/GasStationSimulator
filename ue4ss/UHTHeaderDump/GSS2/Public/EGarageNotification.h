#pragma once
#include "CoreMinimal.h"
#include "EGarageNotification.generated.h"

UENUM(BlueprintType)
enum class EGarageNotification : uint8 {
    BROKEN_MIRROR,
    BROKEN_DOOR,
    BROKEN_WHEEL,
    BROKEN_SPARKPLUG,
    BROKEN_COOLANT,
    BROKEN_BATTERY,
    BROKEN_OIL,
    MAX,
};

