#pragma once
#include "CoreMinimal.h"
#include "SDMinigameGeneralDelegateDelegate.generated.h"

class ASDMinigameBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSDMinigameGeneralDelegate, ASDMinigameBase*, MinigameObj);

