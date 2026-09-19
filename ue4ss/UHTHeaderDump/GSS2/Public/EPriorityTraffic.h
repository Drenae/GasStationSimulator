#pragma once
#include "CoreMinimal.h"
#include "EPriorityTraffic.generated.h"

UENUM(BlueprintType)
enum class EPriorityTraffic : uint8 {
    Vehicle,
    CarWash,
    Cinema,
    MAX,
};

