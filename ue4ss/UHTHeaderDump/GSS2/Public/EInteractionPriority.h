#pragma once
#include "CoreMinimal.h"
#include "EInteractionPriority.generated.h"

UENUM(BlueprintType)
enum class EInteractionPriority : uint8 {
    First,
    Second,
    Third,
};

