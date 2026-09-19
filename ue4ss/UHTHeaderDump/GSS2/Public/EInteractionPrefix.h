#pragma once
#include "CoreMinimal.h"
#include "EInteractionPrefix.generated.h"

UENUM(BlueprintType)
enum class EInteractionPrefix : uint8 {
    CLICK,
    HOLD,
    RELEASE,
    PRESS,
};

