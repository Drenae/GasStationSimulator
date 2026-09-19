#pragma once
#include "CoreMinimal.h"
#include "EJunkyardCarPartType.h"
#include "OnCarPartInteractDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCarPartInteract, const EJunkyardCarPartType&, Slot);

