#pragma once
#include "CoreMinimal.h"
#include "EGarageMinigame.h"
#include "GarageMinigame_EndedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGarageMinigame_Ended, EGarageMinigame, MinigameType, bool, bSuccess);

