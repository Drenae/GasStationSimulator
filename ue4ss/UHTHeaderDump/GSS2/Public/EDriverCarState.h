#pragma once
#include "CoreMinimal.h"
#include "EDriverCarState.generated.h"

UENUM(BlueprintType)
enum class EDriverCarState : uint8 {
    Inside,
    Outside,
};

