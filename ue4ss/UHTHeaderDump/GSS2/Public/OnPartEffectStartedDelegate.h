#pragma once
#include "CoreMinimal.h"
#include "EJunkyardCarPartType.h"
#include "OnPartEffectStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPartEffectStarted, EJunkyardCarPartType, Slot);

