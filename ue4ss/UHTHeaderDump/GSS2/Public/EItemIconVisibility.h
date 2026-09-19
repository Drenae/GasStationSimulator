#pragma once
#include "CoreMinimal.h"
#include "EItemIconVisibility.generated.h"

UENUM(BlueprintType)
enum class EItemIconVisibility : uint8 {
    VISIBLE,
    NOT_ENOUGH_LEVEL,
    NOT_READY,
    NONE,
};

