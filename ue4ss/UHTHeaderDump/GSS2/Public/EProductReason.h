#pragma once
#include "CoreMinimal.h"
#include "EProductReason.generated.h"

UENUM(BlueprintType)
enum class EProductReason : uint8 {
    Full,
    NotEnough,
    ProductPut,
    TimeOver,
    MAX,
};

