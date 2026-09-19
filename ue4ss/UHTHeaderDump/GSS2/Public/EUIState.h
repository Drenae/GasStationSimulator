#pragma once
#include "CoreMinimal.h"
#include "EUIState.generated.h"

UENUM(BlueprintType)
enum class EUIState : uint8 {
    MAIN_COMPUTER,
    COMPUTER_SUBLVL,
    AGREE_STATE,
    DELIVERY_ACCEPT,
    MINI_GAME_FUEL,
    MINI_GAME_AIR,
    MAX,
};

