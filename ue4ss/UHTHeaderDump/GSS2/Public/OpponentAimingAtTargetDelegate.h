#pragma once
#include "CoreMinimal.h"
#include "OpponentAimingAtTargetDelegate.generated.h"

class AShootingRangeTarget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOpponentAimingAtTarget, AShootingRangeTarget*, Target, float, TimeToShoot);

