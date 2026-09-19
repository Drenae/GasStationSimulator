#pragma once
#include "CoreMinimal.h"
#include "EGamePadType.generated.h"

UENUM(BlueprintType)
enum class EGamePadType : uint8 {
    GAMEPAD_XBOX,
    GAMEPAD_PS,
    GAMEPAD_STEAM,
    MAX,
};

