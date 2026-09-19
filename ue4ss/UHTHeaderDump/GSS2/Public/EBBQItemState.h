#pragma once
#include "CoreMinimal.h"
#include "EBBQItemState.generated.h"

UENUM(BlueprintType)
enum class EBBQItemState : uint8 {
    RAW,
    PERFECT,
    BURNT,
};

