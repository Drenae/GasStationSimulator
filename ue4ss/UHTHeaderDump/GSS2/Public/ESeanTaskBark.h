#pragma once
#include "CoreMinimal.h"
#include "ESeanTaskBark.generated.h"

UENUM(BlueprintType)
enum class ESeanTaskBark : uint8 {
    NONE,
    FIXING_ENGINE,
    SITTING_IN_OFFICE,
    MOVING_WRECK,
    CRUSHING_WRECK,
    ASSEMBLING,
    GRINDING,
};

