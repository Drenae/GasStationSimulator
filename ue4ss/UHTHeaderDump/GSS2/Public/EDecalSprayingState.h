#pragma once
#include "CoreMinimal.h"
#include "EDecalSprayingState.generated.h"

UENUM(BlueprintType)
enum class EDecalSprayingState : uint8 {
    PLACING,
    CLEANING,
    PAINTING,
    MAX,
};

