#pragma once
#include "CoreMinimal.h"
#include "ERVCamperLeftReason.generated.h"

UENUM(BlueprintType)
enum class ERVCamperLeftReason : uint8 {
    FULFILLED,
    DISMISSED,
    MAX,
};

