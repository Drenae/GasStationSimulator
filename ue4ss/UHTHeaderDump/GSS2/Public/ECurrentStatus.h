#pragma once
#include "CoreMinimal.h"
#include "ECurrentStatus.generated.h"

UENUM(BlueprintType)
enum class ECurrentStatus : uint8 {
    InQueue,
    FlyingToDestination,
    Arrived,
    TakingOff,
    Cancelled,
};

