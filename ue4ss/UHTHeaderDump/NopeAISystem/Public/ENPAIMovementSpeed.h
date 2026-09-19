#pragma once
#include "CoreMinimal.h"
#include "ENPAIMovementSpeed.generated.h"

UENUM(BlueprintType)
enum class ENPAIMovementSpeed : uint8 {
    Walk,
    Jog,
    Run,
    Sprint,
    WalkBack,
    Swimming,
    MAX,
};

