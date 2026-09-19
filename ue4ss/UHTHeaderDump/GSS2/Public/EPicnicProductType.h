#pragma once
#include "CoreMinimal.h"
#include "EPicnicProductType.generated.h"

UENUM(BlueprintType)
enum class EPicnicProductType : uint8 {
    EPPT_Empty,
    EPPT_Water,
    EPPT_Beer,
    EPPT_Apple,
    EPPT_Carrots,
    EPPT_Chips,
    EPPT_Blanket,
    EPPT_Donut,
    EPPT_Grapes,
    EPPT_Sandwich,
    EPPT_Cups,
    EPPT_Truck,
};

