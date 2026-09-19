#pragma once
#include "CoreMinimal.h"
#include "EDoorSide.generated.h"

UENUM(BlueprintType)
enum class EDoorSide : uint8 {
    LEFT,
    RIGHT,
    MAX,
};

