#pragma once
#include "CoreMinimal.h"
#include "EDoorState.h"
#include "OnDoorStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoorStateChanged, EDoorState, DoorState);

