#pragma once
#include "CoreMinimal.h"
#include "ESpiderPositionType.generated.h"

UENUM(BlueprintType)
enum class ESpiderPositionType : uint8 {
    NONE,
    WEB_STANDING,
    WEB_WALL,
    WEB_WALL_01,
    WEB_HANGING,
    WEB_HANGING_01,
    WEB_HANGING_01_LONG,
    WEB_HANGING_01_SHORT,
};

