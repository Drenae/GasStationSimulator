#pragma once
#include "CoreMinimal.h"
#include "EMagnetDetachErrorReason.generated.h"

UENUM(BlueprintType)
enum class EMagnetDetachErrorReason : uint8 {
    DEFAULT,
    TOO_CLOSE_TO_PLANE_DROP_ZONE,
    NO_DROPPABLE_AREA,
    AREA_OCCUPIED,
    AREA_DISABLED,
    INVALID_ACTOR_CLASS,
    AREA_LOCKED,
    MAX,
};

