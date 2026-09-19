#pragma once
#include "CoreMinimal.h"
#include "OnTeleportUsedDelegate.generated.h"

class ATrapDoor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTeleportUsed, bool, WasSuccesfull, ATrapDoor*, TrapDoor);

