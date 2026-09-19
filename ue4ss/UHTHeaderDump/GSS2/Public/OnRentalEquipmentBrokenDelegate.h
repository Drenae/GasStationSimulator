#pragma once
#include "CoreMinimal.h"
#include "OnRentalEquipmentBrokenDelegate.generated.h"

class AAICharacterBase;
class AInteractableActor;
class ARentalSpot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRentalEquipmentBroken, AInteractableActor*, Building, ARentalSpot*, BrokenEqSpot, AAICharacterBase*, CustomerRentingEq);

