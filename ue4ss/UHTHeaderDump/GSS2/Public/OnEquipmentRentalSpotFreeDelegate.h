#pragma once
#include "CoreMinimal.h"
#include "OnEquipmentRentalSpotFreeDelegate.generated.h"

class AInteractableActor;
class ARentalSpot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEquipmentRentalSpotFree, AInteractableActor*, Building, ARentalSpot*, FreeSpot);

