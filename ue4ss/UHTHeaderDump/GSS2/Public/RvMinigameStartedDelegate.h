#pragma once
#include "CoreMinimal.h"
#include "RvMinigameStartedDelegate.generated.h"

class ARvMinigameInWorld;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRvMinigameStarted, ARvMinigameInWorld*, minigame);

