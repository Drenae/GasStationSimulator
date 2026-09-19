#pragma once
#include "CoreMinimal.h"
#include "EVehicleState.generated.h"

UENUM(BlueprintType)
enum class EVehicleState : uint8 {
    Idle,
    Move,
    Repair,
};

