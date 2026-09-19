#pragma once
#include "CoreMinimal.h"
#include "ERVCustomerState.generated.h"

UENUM(BlueprintType)
enum class ERVCustomerState : uint8 {
    INTERESTED,
    BOOKED,
    ACTIVE,
    WAITING_CHECK_OUT,
    CHECKED_OUT,
    MAX,
};

