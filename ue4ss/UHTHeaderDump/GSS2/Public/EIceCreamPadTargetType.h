#pragma once
#include "CoreMinimal.h"
#include "EIceCreamPadTargetType.generated.h"

UENUM(BlueprintType)
enum class EIceCreamPadTargetType : uint8 {
    ICE_CREAM_CONE_CONTAINER,
    ICE_CREAM_HOLDER,
    ICE_CREAM_CONTAINER,
    BELL,
    MAX,
};

