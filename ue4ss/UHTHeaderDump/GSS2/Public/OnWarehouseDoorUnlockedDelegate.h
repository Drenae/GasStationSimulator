#pragma once
#include "CoreMinimal.h"
#include "OnWarehouseDoorUnlockedDelegate.generated.h"

class AInteractableActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWarehouseDoorUnlocked, AInteractableActor*, UnlockedDoor);

