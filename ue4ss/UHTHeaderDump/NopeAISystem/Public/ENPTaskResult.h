#pragma once
#include "CoreMinimal.h"
#include "ENPTaskResult.generated.h"

UENUM(BlueprintType)
enum class ENPTaskResult : uint8 {
    TaskSuccess,
    TaskFalse,
    TaskIgnore,
};

