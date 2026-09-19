#pragma once
#include "CoreMinimal.h"
#include "EDishwashingEfficiency.generated.h"

UENUM(BlueprintType)
enum class EDishwashingEfficiency : uint8 {
    NORMAL,
    ECO,
    ECO_PLUS,
};

