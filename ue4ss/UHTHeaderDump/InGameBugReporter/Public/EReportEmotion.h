#pragma once
#include "CoreMinimal.h"
#include "EReportEmotion.generated.h"

UENUM(BlueprintType)
enum class EReportEmotion : uint8 {
    VERY_DISSATISFIED,
    DISSATISFIED,
    NEUTRAL,
    SATISFIED,
    VERY_SATISFIED,
    MAX,
};

