#pragma once
#include "CoreMinimal.h"
#include "EVehicleMovementState.generated.h"

UENUM(BlueprintType)
enum class EVehicleMovementState : uint8 {
    Move,
    Block,
};

