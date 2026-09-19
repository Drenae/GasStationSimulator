#pragma once
#include "CoreMinimal.h"
#include "ESDGangActivityResult.generated.h"

UENUM(BlueprintType)
enum class ESDGangActivityResult : uint8 {
    Success,
    Fail,
    CriticalFail,
    CaughtFail,
    Silent,
    MAX,
};

