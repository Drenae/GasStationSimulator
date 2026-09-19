#pragma once
#include "CoreMinimal.h"
#include "ERVChallengeTimeTrackType.generated.h"

UENUM(BlueprintType)
enum class ERVChallengeTimeTrackType : uint8 {
    ETT_UNLIMITED,
    ETT_Hours,
    ETT_WholeTurnout,
};

