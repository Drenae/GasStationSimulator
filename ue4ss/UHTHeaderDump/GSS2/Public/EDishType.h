#pragma once
#include "CoreMinimal.h"
#include "EDishType.generated.h"

UENUM(BlueprintType)
enum class EDishType : uint8 {
    PLATE,
    BOWL,
    CUP,
    COOKWARE,
};

