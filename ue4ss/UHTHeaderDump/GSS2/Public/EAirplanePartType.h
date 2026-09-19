#pragma once
#include "CoreMinimal.h"
#include "EAirplanePartType.generated.h"

UENUM(BlueprintType)
enum class EAirplanePartType : uint8 {
    STABLILZER_LEFT,
    STABLILZER_RIGHT,
    WING_LEFT,
    WING_RIGHT,
    MAX,
};

