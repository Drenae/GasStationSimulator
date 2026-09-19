#pragma once
#include "CoreMinimal.h"
#include "EUnlockableGameplayStuffState.generated.h"

UENUM(BlueprintType)
enum class EUnlockableGameplayStuffState : uint8 {
    LOCKED,
    UNLOCKED,
    MAX,
};

