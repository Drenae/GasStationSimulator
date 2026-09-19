#pragma once
#include "CoreMinimal.h"
#include "EContainerAnimation.generated.h"

UENUM(BlueprintType)
enum class EContainerAnimation : uint8 {
    NO_ANIM,
    CONTAINER_UP,
    CONTAINER_DOWN,
    SPOONT_TO_CONE,
    MAX,
};

