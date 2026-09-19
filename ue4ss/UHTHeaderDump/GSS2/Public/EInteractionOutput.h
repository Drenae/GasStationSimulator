#pragma once
#include "CoreMinimal.h"
#include "EInteractionOutput.generated.h"

UENUM(BlueprintType)
enum class EInteractionOutput : uint8 {
    Pressed,
    Released,
};

