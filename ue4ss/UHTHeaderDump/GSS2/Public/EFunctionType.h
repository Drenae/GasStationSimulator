#pragma once
#include "CoreMinimal.h"
#include "EFunctionType.generated.h"

UENUM(BlueprintType)
enum class EFunctionType : uint8 {
    LINEAR,
    EXPONENTIAL,
    MAX,
};

