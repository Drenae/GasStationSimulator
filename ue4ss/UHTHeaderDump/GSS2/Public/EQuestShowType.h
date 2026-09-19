#pragma once
#include "CoreMinimal.h"
#include "EQuestShowType.generated.h"

UENUM(BlueprintType)
enum class EQuestShowType : uint8 {
    ProgressBar,
    Timer,
};

