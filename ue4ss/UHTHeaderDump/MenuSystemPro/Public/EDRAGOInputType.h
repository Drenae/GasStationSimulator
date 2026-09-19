#pragma once
#include "CoreMinimal.h"
#include "EDRAGOInputType.generated.h"

UENUM(BlueprintType)
enum class EDRAGOInputType : uint8 {
    KEYBOARD,
    GAMEPAD,
    MAX,
};

