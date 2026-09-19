#pragma once
#include "CoreMinimal.h"
#include "EShiftType.generated.h"

UENUM(BlueprintType)
enum class EShiftType : uint8 {
    DAY,
    NIGHT,
    MAX,
};

