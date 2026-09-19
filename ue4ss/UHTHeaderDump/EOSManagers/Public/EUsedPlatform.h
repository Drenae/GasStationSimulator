#pragma once
#include "CoreMinimal.h"
#include "EUsedPlatform.generated.h"

UENUM(BlueprintType)
enum class EUsedPlatform : uint8 {
    STEAM,
    GOG,
    EPIC,
    UNKNOWN,
    MAX,
};

