#pragma once
#include "CoreMinimal.h"
#include "ESDMinigameEndReason.generated.h"

UENUM(BlueprintType)
enum class ESDMinigameEndReason : uint8 {
    Success,
    TimeOut,
    CrucialActorLost,
    Cancel,
    Fail,
    CriticalFail,
    CaughtBySheriff,
    MAX,
};

