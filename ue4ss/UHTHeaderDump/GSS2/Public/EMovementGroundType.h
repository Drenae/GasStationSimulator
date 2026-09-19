#pragma once
#include "CoreMinimal.h"
#include "EMovementGroundType.generated.h"

UENUM(BlueprintType)
enum class EMovementGroundType : uint8 {
    Walk,
    Jog,
    Run,
    Dance_1,
    Dance_2,
    Elvis,
    Panic,
};

