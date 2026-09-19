#pragma once
#include "CoreMinimal.h"
#include "ECountableObjectiveDisplayType.generated.h"

UENUM(BlueprintType)
enum class ECountableObjectiveDisplayType : uint8 {
    REGULAR,
    TIME,
    MAX,
};

