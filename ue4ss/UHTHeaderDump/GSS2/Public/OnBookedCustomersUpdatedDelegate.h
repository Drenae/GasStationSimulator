#pragma once
#include "CoreMinimal.h"
#include "OnBookedCustomersUpdatedDelegate.generated.h"

class ARVCampSpot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBookedCustomersUpdated, ARVCampSpot*, CampSpot, int32, CustomerIndex);

