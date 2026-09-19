#pragma once
#include "CoreMinimal.h"
#include "EHammerEditType.generated.h"

UENUM(BlueprintType)
enum class EHammerEditType : uint8 {
    DEFAULT,
    QUEUE,
    ROOF,
    WALL,
    PLACEABLE_ACTOR,
    FINISHED,
    CASH_DESK,
    MAX,
};

