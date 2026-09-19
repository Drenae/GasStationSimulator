#pragma once
#include "CoreMinimal.h"
#include "ERefuelObjectiveType.generated.h"

UENUM(BlueprintType)
enum class ERefuelObjectiveType : uint8 {
    LESS,
    NEARLY_EQUALS,
    MORE,
    MAX,
};

