#pragma once
#include "CoreMinimal.h"
#include "EBuildingType.h"
#include "OnBuildingUpgradedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnBuildingUpgraded, EBuildingType, BuildingType, int32, NewBuildingLevel, bool, bLoadedFromSave);

