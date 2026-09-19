#pragma once
#include "CoreMinimal.h"
#include "EWheelSide_FourWheel.generated.h"

UENUM(BlueprintType)
enum class EWheelSide_FourWheel : uint8 {
    FRONT_LEFT,
    FRONT_RIGHT,
    BACK_LEFT,
    BACK_RIGHT,
    MAX,
};

