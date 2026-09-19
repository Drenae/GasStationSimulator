#pragma once
#include "CoreMinimal.h"
#include "ECarWreckPlaceableAreaType.generated.h"

UENUM(BlueprintType)
enum class ECarWreckPlaceableAreaType : uint8 {
    WRECKS_SPOT,
    SHREDDER,
    PLATFORM,
    EXHIBITION_SPOT,
    PHOTO_MODE,
    MAX,
};

