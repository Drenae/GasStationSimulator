#pragma once
#include "CoreMinimal.h"
#include "EMarshalWandsMinigameDifficulty.generated.h"

UENUM(BlueprintType)
enum class EMarshalWandsMinigameDifficulty : uint8 {
    EASY,
    MEDIUM,
    HARD,
    MAX,
};

