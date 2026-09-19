#pragma once
#include "CoreMinimal.h"
#include "EBuildingAreaType.generated.h"

UENUM(BlueprintType)
enum class EBuildingAreaType : uint8 {
    GAS_STATION_INSIDE,
    GAS_STATION_OUTSIDE,
    GARAGE,
    WAREHOUSE,
    PLAYER_ROOM,
    EVERYWHERE,
    NONE,
    MAX,
};

