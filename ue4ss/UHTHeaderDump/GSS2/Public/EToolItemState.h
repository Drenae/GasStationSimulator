#pragma once
#include "CoreMinimal.h"
#include "EToolItemState.generated.h"

UENUM(BlueprintType)
enum class EToolItemState : uint8 {
    UNLOCKED,
    LOCKED,
    OWNED,
};

