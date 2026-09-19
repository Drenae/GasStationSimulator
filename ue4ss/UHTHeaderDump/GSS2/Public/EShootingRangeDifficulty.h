#pragma once
#include "CoreMinimal.h"
#include "EShootingRangeDifficulty.generated.h"

UENUM(BlueprintType)
enum class EShootingRangeDifficulty : uint8 {
    StandUp,
    Movable,
    ZigZag,
    UFO,
    Coyot,
    MAX,
};

