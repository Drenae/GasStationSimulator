#pragma once
#include "CoreMinimal.h"
#include "OnParkingUpgradedDelegate.generated.h"

class ARVCampSpot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnParkingUpgraded, ARVCampSpot*, UpgradedSpot, int32, SpotIndex);

