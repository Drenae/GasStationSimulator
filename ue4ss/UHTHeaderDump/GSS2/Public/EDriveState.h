#pragma once
#include "CoreMinimal.h"
#include "EDriveState.generated.h"

UENUM(BlueprintType)
enum class EDriveState : uint8 {
    DRIVING,
    SLOWING_FOR_TURN,
    STOPPING_GOAL,
    STOPPING_OBSTACLE,
    STOPPED,
    MAX,
};

