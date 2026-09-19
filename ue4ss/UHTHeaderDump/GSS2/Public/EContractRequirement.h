#pragma once
#include "CoreMinimal.h"
#include "EContractRequirement.generated.h"

UENUM(BlueprintType)
enum class EContractRequirement : uint8 {
    CAR_WRECK_CLASS,
    CAR_WRECK_TIER,
    CAR_PARTS_TIER,
    CAR_PARTS_CLASS,
    HANDLING_STAT,
    ACCELERATION_STAT,
    STRENGTH_STAT,
    TOP_SPEED_STAT,
    PAINT_TYPE,
    PAINT_MASK,
    PAINT_COLOR,
    DECALS,
    MAX,
};

