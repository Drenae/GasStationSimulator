#pragma once
#include "CoreMinimal.h"
#include "EJunkyardCarPartType.h"
#include "OnPartRemovingStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPartRemovingStarted, EJunkyardCarPartType, Slot);

