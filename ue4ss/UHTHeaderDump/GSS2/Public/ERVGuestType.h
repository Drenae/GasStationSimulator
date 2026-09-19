#pragma once
#include "CoreMinimal.h"
#include "ERVGuestType.generated.h"

UENUM(BlueprintType)
enum class ERVGuestType : uint8 {
    SERVICE,
    SLEEPOVER,
    CONCERT,
    MAX,
};

