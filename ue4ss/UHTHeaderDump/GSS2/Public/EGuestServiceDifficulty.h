#pragma once
#include "CoreMinimal.h"
#include "EGuestServiceDifficulty.generated.h"

UENUM(BlueprintType)
enum class EGuestServiceDifficulty : uint8 {
    EASY,
    MEDIUM,
    HARD,
    MAX,
};

