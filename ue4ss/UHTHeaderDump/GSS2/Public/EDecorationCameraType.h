#pragma once
#include "CoreMinimal.h"
#include "EDecorationCameraType.generated.h"

UENUM(BlueprintType)
enum class EDecorationCameraType : uint8 {
    NORMAL_DECORATION,
    INTERACTIVE_DECORATION,
    FEATURES,
    MAX,
};

