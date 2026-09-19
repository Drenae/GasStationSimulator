#pragma once
#include "CoreMinimal.h"
#include "EJoeSittingState.generated.h"

UENUM(BlueprintType)
enum class EJoeSittingState : uint8 {
    Breathing,
    Drinking,
    Smoking,
    MAX,
};

