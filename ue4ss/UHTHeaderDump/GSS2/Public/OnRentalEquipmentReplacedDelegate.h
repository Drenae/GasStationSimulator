#pragma once
#include "CoreMinimal.h"
#include "OnRentalEquipmentReplacedDelegate.generated.h"

class AInteractableActor;
class ARentalSpot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRentalEquipmentReplaced, AInteractableActor*, Building, ARentalSpot*, FreeSpot);

