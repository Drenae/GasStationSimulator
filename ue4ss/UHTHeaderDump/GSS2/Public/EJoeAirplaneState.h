#pragma once
#include "CoreMinimal.h"
#include "EJoeAirplaneState.generated.h"

UENUM(BlueprintType)
enum class EJoeAirplaneState : uint8 {
    CRASHED,
    TOWING,
    TAPE_FIXING,
    FUELING,
    LIFTING_OFF,
    FLYING_AWAY,
    MAX,
};

