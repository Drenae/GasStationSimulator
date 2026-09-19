#pragma once
#include "CoreMinimal.h"
#include "ERVResource.generated.h"

UENUM(BlueprintType)
enum class ERVResource : uint8 {
    POWER,
    WATER,
    SEWERAGE,
    MAX,
};

