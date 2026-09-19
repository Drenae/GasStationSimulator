#pragma once
#include "CoreMinimal.h"
#include "ESDMinigameEndReason.h"
#include "SDMinigameEndDelegateDelegate.generated.h"

class ASDMinigameBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDMinigameEndDelegate, ASDMinigameBase*, MinigameObj, ESDMinigameEndReason, EndReason);

