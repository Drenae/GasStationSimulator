#pragma once
#include "CoreMinimal.h"
#include "ERelativeDistance.generated.h"

UENUM(BlueprintType)
enum class ERelativeDistance : uint8 {
    ERD_CLOSEST,
    ERD_FARTHEST,
};

