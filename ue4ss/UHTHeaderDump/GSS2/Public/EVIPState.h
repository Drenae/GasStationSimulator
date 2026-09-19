#pragma once
#include "CoreMinimal.h"
#include "EVIPState.generated.h"

UENUM(BlueprintType)
enum class EVIPState : uint8 {
    RESTING,
    TRAVELING,
    ON_MAP,
    GOING_BACK,
    AWAITING,
    MAX,
};

