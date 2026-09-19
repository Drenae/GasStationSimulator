#pragma once
#include "CoreMinimal.h"
#include "EBBQSelectSlotDirection.generated.h"

UENUM(BlueprintType)
enum class EBBQSelectSlotDirection : uint8 {
    NONE,
    UP,
    DOWN,
    RIGHT,
    LEFT,
};

