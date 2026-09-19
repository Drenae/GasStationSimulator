#pragma once
#include "CoreMinimal.h"
#include "EMeshMovementDirection.generated.h"

UENUM(BlueprintType)
enum class EMeshMovementDirection : uint8 {
    FORWARD,
    BACK,
    MAX,
};

