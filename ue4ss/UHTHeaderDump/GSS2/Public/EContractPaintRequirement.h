#pragma once
#include "CoreMinimal.h"
#include "EContractPaintRequirement.generated.h"

UENUM(BlueprintType)
enum class EContractPaintRequirement : uint8 {
    COLOR,
    FINISH_TYPE,
    PAINT_TYPE,
    MAX,
};

