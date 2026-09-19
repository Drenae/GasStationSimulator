#pragma once
#include "CoreMinimal.h"
#include "ELeaderboardStatDataType.generated.h"

UENUM(BlueprintType)
enum class ELeaderboardStatDataType : uint8 {
    EInt32,
    EFloat,
    EText,
    EBool,
    MAX,
};

