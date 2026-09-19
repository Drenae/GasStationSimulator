#pragma once
#include "CoreMinimal.h"
#include "EGarageMinigame.h"
#include "GarageMinigame_StartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGarageMinigame_Started, EGarageMinigame, MinigameType);

