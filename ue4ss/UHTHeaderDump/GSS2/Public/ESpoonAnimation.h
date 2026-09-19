#pragma once
#include "CoreMinimal.h"
#include "ESpoonAnimation.generated.h"

UENUM(BlueprintType)
enum class ESpoonAnimation : uint8 {
    NO_ANIM = 1,
    FOLLOW_MOUSE,
    SPOON_WITH_SCOOP,
    SPOON_TO_CONTAINER,
    SPOON_TO_CONE,
    TO_HAND,
    FLIP,
    MAX,
};

