#pragma once
#include "CoreMinimal.h"
#include "ERVCamperState.generated.h"

UENUM(BlueprintType)
enum class ERVCamperState : uint8 {
    ARRIVING,
    PARKED,
    LEAVING,
    MAX,
};

