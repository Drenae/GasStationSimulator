#pragma once
#include "CoreMinimal.h"
#include "ERVBookingView.generated.h"

UENUM(BlueprintType)
enum class ERVBookingView : uint8 {
    BOOKING,
    OVERVIEW,
    UPGRADE,
    MAX,
};

