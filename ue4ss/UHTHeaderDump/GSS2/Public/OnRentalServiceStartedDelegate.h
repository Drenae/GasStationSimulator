#pragma once
#include "CoreMinimal.h"
#include "OnRentalServiceStartedDelegate.generated.h"

class AInteractableActor;
class ARentalSpot;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRentalServiceStarted, AInteractableActor*, Building, ARentalSpot*, RentalSpot);

