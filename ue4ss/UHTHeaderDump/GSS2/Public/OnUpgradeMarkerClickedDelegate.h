#pragma once
#include "CoreMinimal.h"
#include "RVUpgradeInputData.h"
#include "OnUpgradeMarkerClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpgradeMarkerClicked, FRVUpgradeInputData, UpgradeInputData);

