#pragma once
#include "CoreMinimal.h"
#include "ELeaderboardDataType.generated.h"

UENUM(BlueprintType)
enum class ELeaderboardDataType : uint8 {
    Global,
    GlobalAroundUser,
    Friends,
    Users,
};

