#pragma once
#include "CoreMinimal.h"
#include "ECustomTextVariableType.generated.h"

UENUM(BlueprintType)
enum class ECustomTextVariableType : uint8 {
    ECTVT_SavedServiceName,
    ECTVT_SomeOtherNonsense,
    MAX,
};

