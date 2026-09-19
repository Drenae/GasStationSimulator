#pragma once
#include "CoreMinimal.h"
#include "ENPAIMovementMode.generated.h"

UENUM(BlueprintType)
enum class ENPAIMovementMode : uint8 {
    Walking,
    Swimming,
    Flying,
    Falling,
    MAX,
};

