#pragma once
#include "CoreMinimal.h"
#include "ECarWreckState.generated.h"

UENUM(BlueprintType)
enum class ECarWreckState : uint8 {
    FREE,
    ATTACHED_TO_MAGNET,
    JUST_DROPPED_BY_MAGNET,
    ATTACHED_TO_TOW_TRUCK,
    WAITING_AT_TOW_TRUCK,
    PLACED_ON_AREA,
    SHREDDED,
    MAX,
};

