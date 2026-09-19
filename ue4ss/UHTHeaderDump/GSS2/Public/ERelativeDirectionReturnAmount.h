#pragma once
#include "CoreMinimal.h"
#include "ERelativeDirectionReturnAmount.generated.h"

UENUM(BlueprintType)
enum class ERelativeDirectionReturnAmount : uint8 {
    TWO,
    FOUR,
    EIGHT,
    MAX,
};

