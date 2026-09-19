#pragma once
#include "CoreMinimal.h"
#include "OnCousinHouseUpgradedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCousinHouseUpgraded, int32, NewLevel);

