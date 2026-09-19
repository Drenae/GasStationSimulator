#pragma once
#include "CoreMinimal.h"
#include "EAIState.generated.h"

UENUM(BlueprintType)
enum class EAIState : uint8 {
    Wait,
    Move,
    Action,
    Reset,
};

