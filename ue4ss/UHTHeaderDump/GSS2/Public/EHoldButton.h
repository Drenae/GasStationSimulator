#pragma once
#include "CoreMinimal.h"
#include "EHoldButton.generated.h"

UENUM(BlueprintType)
enum class EHoldButton : uint8 {
    RMB,
    LMB,
    F,
    NONE,
    MAX,
};

