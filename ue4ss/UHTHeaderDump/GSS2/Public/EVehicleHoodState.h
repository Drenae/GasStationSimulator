#pragma once
#include "CoreMinimal.h"
#include "EVehicleHoodState.generated.h"

UENUM(BlueprintType)
enum class EVehicleHoodState : uint8 {
    CLOSED,
    CLOSING,
    OPEN,
    OPENING,
    MAX,
};

