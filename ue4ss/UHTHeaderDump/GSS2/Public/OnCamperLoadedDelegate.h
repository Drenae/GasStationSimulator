#pragma once
#include "CoreMinimal.h"
#include "OnCamperLoadedDelegate.generated.h"

class URVCamperComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCamperLoaded, URVCamperComponent*, Camper, bool, IsParked);

