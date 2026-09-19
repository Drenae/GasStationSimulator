#pragma once
#include "CoreMinimal.h"
#include "ERVEventType.generated.h"

UENUM(BlueprintType)
enum class ERVEventType : uint8 {
    UFO,
    DENIS,
    SANDSTORM,
    MAX,
};

