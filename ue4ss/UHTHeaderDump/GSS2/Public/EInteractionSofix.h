#pragma once
#include "CoreMinimal.h"
#include "EInteractionSofix.generated.h"

UENUM(BlueprintType)
enum class EInteractionSofix : uint8 {
    PLACE,
    HIDE,
    INTERACT,
    ROTATE,
    CANCEL,
    PICK_UP,
    PICK_ALL,
    STORE_SINGLE,
    STORE_ALL,
    PAINT,
    OPEN_INVENTORY,
    HIDE_TOOL,
    THROW,
    DROP,
    TANK,
    TALK,
    CUSTOMIZE,
    EDIT_QUEUE,
    TO_EDIT_CASH_DESK,
    USE_SEAN,
};

