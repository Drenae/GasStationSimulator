#pragma once
#include "CoreMinimal.h"
#include "EBuildingPathStationState.generated.h"

UENUM(BlueprintType)
enum class EBuildingPathStationState : uint8 {
    OPEN,
    CLOSED,
    NOT_ACQUIRED,
    MAX,
};

