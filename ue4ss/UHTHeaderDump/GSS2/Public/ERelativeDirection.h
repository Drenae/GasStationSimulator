#pragma once
#include "CoreMinimal.h"
#include "ERelativeDirection.generated.h"

UENUM(BlueprintType)
enum class ERelativeDirection : uint8 {
    FRONT,
    FRONT_RIGHT,
    RIGHT,
    BACK_RIGHT,
    BACK,
    BACK_LEFT,
    LEFT,
    FRONT_LEFT,
    MAX,
};

