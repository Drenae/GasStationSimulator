#pragma once
#include "CoreMinimal.h"
#include "EMontagePilotState.generated.h"

UENUM(BlueprintType)
enum class EMontagePilotState : uint8 {
    Mounted,
    Mounting,
    UnMounted,
    UnMounting,
    Unpatient_1,
    Unpatient_2,
    MAX,
};

