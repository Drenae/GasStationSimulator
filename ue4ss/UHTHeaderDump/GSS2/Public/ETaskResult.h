#pragma once
#include "CoreMinimal.h"
#include "ETaskResult.generated.h"

UENUM(BlueprintType)
enum class ETaskResult : uint8 {
    TaskSuccess,
    TaskFalse,
    TaskIgnore,
};

