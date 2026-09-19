#pragma once
#include "CoreMinimal.h"
#include "EProgressState.generated.h"

UENUM(BlueprintType)
enum class EProgressState : uint8 {
    AVAILABLE,
    IN_PROGRESS,
    WAITING,
    WRECK_ON_WAY,
    COMPLETED,
    FAILED,
    MAX,
};

