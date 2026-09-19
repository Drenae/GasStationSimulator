#pragma once
#include "CoreMinimal.h"
#include "ERVChallengeTarget.generated.h"

UENUM(BlueprintType)
enum class ERVChallengeTarget : uint8 {
    ECT_CampersAmount,
    ECT_GuestAmount,
    ECT_RelaxBelow,
    ECT_DifferentGuestServicePerformed,
    ECT_MoneyEarn,
    MAX,
};

