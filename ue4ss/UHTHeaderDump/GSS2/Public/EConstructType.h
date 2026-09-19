#pragma once
#include "CoreMinimal.h"
#include "EConstructType.generated.h"

UENUM(BlueprintType)
enum class EConstructType : uint8 {
    SnapToPoint,
    SnapToGround,
};

