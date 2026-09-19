#pragma once
#include "CoreMinimal.h"
#include "ETradingCenterUpgrade.generated.h"

UENUM(BlueprintType)
enum class ETradingCenterUpgrade : uint8 {
    HEADQUATERS,
    RADIO_TOWER,
    COM_CENTER,
    MAX,
};

