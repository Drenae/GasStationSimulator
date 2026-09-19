#pragma once
#include "CoreMinimal.h"
#include "EIceCreamMakingState.generated.h"

UENUM(BlueprintType)
enum class EIceCreamMakingState : uint8 {
    DEFAULT,
    PLACING_CONE,
    MAKING_SCOOP,
    SELECTING_CONE_TO_PLACE_SCOOP,
    PLACING_SCOOP_ON_CONE,
    CLEANING_SPOON,
    MAX,
};

