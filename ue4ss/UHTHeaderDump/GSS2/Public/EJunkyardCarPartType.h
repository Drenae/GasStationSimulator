#pragma once
#include "CoreMinimal.h"
#include "EJunkyardCarPartType.generated.h"

UENUM(BlueprintType)
enum class EJunkyardCarPartType : uint8 {
    FRONTBUMPER,
    REARBUMPER,
    LEFTDOOR,
    RIGHTDOOR,
    FRONTWHEELS,
    BACKWHEELS,
    SPOILER,
    EXHAUST,
    MIRRORS,
    ENGINE,
    TURBO,
    HOOD,
    BATTERY,
    SPARKPLUG,
    CARBODY,
    LOGO,
    MAX,
};

