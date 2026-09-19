#pragma once
#include "CoreMinimal.h"
#include "EFameRewardCategory.generated.h"

UENUM(BlueprintType)
enum class EFameRewardCategory : uint8 {
    COLORS,
    DECALS,
    PAINT_STYLES,
    PAINT_TYPES,
    DECORATIONS,
    LANDMARKS,
    WRECKS,
    MAX,
};

