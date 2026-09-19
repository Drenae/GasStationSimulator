#pragma once
#include "CoreMinimal.h"
#include "OnBookingUpgradedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBookingUpgraded, int32, NewLevel);

