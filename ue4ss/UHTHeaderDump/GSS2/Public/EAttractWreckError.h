#pragma once
#include "CoreMinimal.h"
#include "EAttractWreckError.generated.h"

UENUM(BlueprintType)
enum class EAttractWreckError : uint8 {
    NOT_DELIVERED_YET,
    ALL_SPOTS_OCCUPIED,
    RESERVED_BY_SEAN,
    MOVING_LOCKED,
    PROJECT_IN_PROGRESS,
    MAX,
};

