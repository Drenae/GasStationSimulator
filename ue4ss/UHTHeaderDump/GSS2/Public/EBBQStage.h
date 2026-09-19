#pragma once
#include "CoreMinimal.h"
#include "EBBQStage.generated.h"

UENUM(BlueprintType)
enum class EBBQStage : uint8 {
    RAW,
    COOKING,
    READY,
};

