#pragma once
#include "CoreMinimal.h"
#include "EDishPlacementResult.generated.h"

UENUM(BlueprintType)
enum class EDishPlacementResult : uint8 {
    SUCCESS,
    INVALID_DISH,
    DIRTY_DISH,
    WRONG_DISH_STACK,
    NOT_ENOUGH_SPACE,
};

