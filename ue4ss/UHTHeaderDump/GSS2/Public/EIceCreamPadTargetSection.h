#pragma once
#include "CoreMinimal.h"
#include "EIceCreamPadTargetSection.generated.h"

UENUM(BlueprintType)
enum class EIceCreamPadTargetSection : uint8 {
    UPPER_SECTION,
    ICE_CREAM_CONTAINER_TOP,
    ICE_CREAM_CONTAINER_BOTTOM,
    MAX,
};

