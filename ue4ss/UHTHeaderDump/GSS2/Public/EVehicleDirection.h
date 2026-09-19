#pragma once
#include "CoreMinimal.h"
#include "EVehicleDirection.generated.h"

UENUM(BlueprintType)
enum class EVehicleDirection : uint8 {
    Forward,
    Right,
    Left,
};

