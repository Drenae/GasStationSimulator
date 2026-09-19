#pragma once
#include "CoreMinimal.h"
#include "OnEquipmentDurabilityChangedDelegate.generated.h"

class ARentalSpot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquipmentDurabilityChanged, ARentalSpot*, RentalSpot, float, NewDurabilityValue);

