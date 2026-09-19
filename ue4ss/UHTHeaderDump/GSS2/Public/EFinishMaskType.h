#pragma once
#include "CoreMinimal.h"
#include "EFinishMaskType.generated.h"

UENUM(BlueprintType)
enum class EFinishMaskType : uint8 {
    NONE,
    CARBON_FIBER,
    CHAMELEON,
    DAMASCUS,
    MATTE,
    MAX,
};

