#pragma once
#include "CoreMinimal.h"
#include "EUnlockableUIState.generated.h"

UENUM(BlueprintType)
enum class EUnlockableUIState : uint8 {
    HIDDED,
    LOCKED,
    UNLOCKED,
    MAX,
};

