#pragma once
#include "CoreMinimal.h"
#include "eLotteryState.generated.h"

UENUM(BlueprintType)
enum class eLotteryState : uint8 {
    READY,
    ACTIVE,
    FINISHED,
};

