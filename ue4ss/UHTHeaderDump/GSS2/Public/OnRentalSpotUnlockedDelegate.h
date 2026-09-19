#pragma once
#include "CoreMinimal.h"
#include "OnRentalSpotUnlockedDelegate.generated.h"

class ARentalSpot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRentalSpotUnlocked, ARentalSpot*, NewRentalSpot);

