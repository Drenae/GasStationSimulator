#pragma once
#include "CoreMinimal.h"
#include "RvMinigameLateStartDelegate.generated.h"

class ARvMinigameInWorld;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRvMinigameLateStart, ARvMinigameInWorld*, minigame);

