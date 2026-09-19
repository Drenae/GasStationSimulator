#pragma once
#include "CoreMinimal.h"
#include "EQueueType.generated.h"

UENUM(BlueprintType)
enum class EQueueType : uint8 {
    EQT_None,
    EQT_Fast,
    EQT_Slow,
};

