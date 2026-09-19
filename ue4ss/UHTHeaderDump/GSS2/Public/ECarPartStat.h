#pragma once
#include "CoreMinimal.h"
#include "ECarPartStat.generated.h"

UENUM(BlueprintType)
enum class ECarPartStat : uint8 {
    ACCELERATION,
    TOP_SPEED,
    HANDLING,
    STRENGTH,
    MAX,
};

