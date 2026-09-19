#pragma once
#include "CoreMinimal.h"
#include "EStructureType.generated.h"

UENUM(BlueprintType)
enum class EStructureType : uint8 {
    WALL,
    WINDOW,
    GAS_STATION_DOOR,
    TOILET_DOOR,
    DOOR,
    PILLAR,
    ROOF,
    FLOOR,
    OTHER,
    DEFAULT,
    MAX,
};

