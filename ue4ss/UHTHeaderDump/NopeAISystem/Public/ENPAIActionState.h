#pragma once
#include "CoreMinimal.h"
#include "ENPAIActionState.generated.h"

UENUM(BlueprintType)
enum class ENPAIActionState : uint8 {
    Action,
    Move,
    Wait,
    MAX,
};

