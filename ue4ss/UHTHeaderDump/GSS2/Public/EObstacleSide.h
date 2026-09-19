#pragma once
#include "CoreMinimal.h"
#include "EObstacleSide.generated.h"

UENUM(BlueprintType)
enum class EObstacleSide : uint8 {
    NoObstacle,
    Left,
    Right,
};

