#pragma once
#include "CoreMinimal.h"
#include "EJunkyardCarPartType.h"
#include "OnDecalEffectStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDecalEffectStarted, EJunkyardCarPartType, Slot, int32, DecalIndex);

