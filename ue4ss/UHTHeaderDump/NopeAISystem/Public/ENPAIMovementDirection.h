#pragma once
#include "CoreMinimal.h"
#include "ENPAIMovementDirection.generated.h"

UENUM(BlueprintType)
enum class ENPAIMovementDirection : uint8 {
    Forward,
    Back,
    Left,
    Right,
    MAX,
};

