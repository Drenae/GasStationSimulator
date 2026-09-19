#pragma once
#include "CoreMinimal.h"
#include "ERVMinigameStage.generated.h"

UENUM(BlueprintType)
enum class ERVMinigameStage : uint8 {
    INACTIVE,
    EARLY,
    NORMAL,
    POST_END,
};

