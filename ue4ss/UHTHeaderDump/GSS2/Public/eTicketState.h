#pragma once
#include "CoreMinimal.h"
#include "eTicketState.generated.h"

UENUM(BlueprintType)
enum class eTicketState : uint8 {
    UNDEFINED,
    UNVERIFIED,
    VALIDATED,
    GOING_HOME,
};

