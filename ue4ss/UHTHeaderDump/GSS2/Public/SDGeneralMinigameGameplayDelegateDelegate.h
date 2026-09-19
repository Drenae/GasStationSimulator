#pragma once
#include "CoreMinimal.h"
#include "SDGeneralMinigameGameplayDelegateDelegate.generated.h"

class ASDMinigameBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSDGeneralMinigameGameplayDelegate, ASDMinigameBase*, minigame);

