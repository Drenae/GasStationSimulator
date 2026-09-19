#pragma once
#include "CoreMinimal.h"
#include "EJunkyardPartRarity.generated.h"

UENUM(BlueprintType)
enum class EJunkyardPartRarity : uint8 {
    FAKE,
    SUBSTITUTE,
    ORIGINAL,
    NONE,
    MAX,
};

