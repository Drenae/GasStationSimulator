#pragma once
#include "CoreMinimal.h"
#include "EMagnetState.generated.h"

UENUM(BlueprintType)
enum class EMagnetState : uint8 {
    OBJECT_ATTACHED,
    OBJECT_NOT_ATTACHED,
    OBJECT_ROTATION_ADJUSMENT,
    MAX,
};

