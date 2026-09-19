#pragma once
#include "CoreMinimal.h"
#include "ESDShadynessModifierPersistance.generated.h"

UENUM(BlueprintType)
enum class ESDShadynessModifierPersistance : uint8 {
    Instant,
    Duration,
};

