#pragma once
#include "CoreMinimal.h"
#include "ESwitchState.generated.h"

UENUM(BlueprintType)
enum class ESwitchState : uint8 {
    ON,
    OFF,
    MAX,
};

