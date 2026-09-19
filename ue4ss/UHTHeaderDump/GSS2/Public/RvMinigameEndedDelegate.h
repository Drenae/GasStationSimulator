#pragma once
#include "CoreMinimal.h"
#include "RvMinigameEndedDelegate.generated.h"

class ARvMinigameInWorld;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRvMinigameEnded, ARvMinigameInWorld*, minigame, bool, bSuccess);

