#pragma once
#include "CoreMinimal.h"
#include "EVehicleMoveState.generated.h"

UENUM(BlueprintType)
enum class EVehicleMoveState : uint8 {
    Driving,
    Stopped,
    Flying,
};

