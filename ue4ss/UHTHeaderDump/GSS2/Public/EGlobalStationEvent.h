#pragma once
#include "CoreMinimal.h"
#include "EGlobalStationEvent.generated.h"

UENUM(BlueprintType)
enum class EGlobalStationEvent : uint8 {
    STATION_CLOSED,
    VOLCANO_ERUPTION,
    UFO,
    MAX,
};

