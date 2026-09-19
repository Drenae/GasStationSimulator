#pragma once
#include "CoreMinimal.h"
#include "OnConcertBuildingUpgradedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConcertBuildingUpgraded, int32, NewLevel);

