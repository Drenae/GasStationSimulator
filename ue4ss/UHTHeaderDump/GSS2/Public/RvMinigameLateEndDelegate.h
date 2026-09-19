#pragma once
#include "CoreMinimal.h"
#include "RvMinigameLateEndDelegate.generated.h"

class ARvMinigameInWorld;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRvMinigameLateEnd, ARvMinigameInWorld*, minigame, bool, bSuccess);

