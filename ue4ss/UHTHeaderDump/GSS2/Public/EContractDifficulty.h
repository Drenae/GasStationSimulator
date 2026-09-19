#pragma once
#include "CoreMinimal.h"
#include "EContractDifficulty.generated.h"

UENUM(BlueprintType)
enum class EContractDifficulty : uint8 {
    EASY,
    MEDIUM,
    HARD,
    MAX,
};

