#pragma once
#include "CoreMinimal.h"
#include "EJunkyardCarPartType.h"
#include "OnPaintEffectStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPaintEffectStarted, EJunkyardCarPartType, Slot);

