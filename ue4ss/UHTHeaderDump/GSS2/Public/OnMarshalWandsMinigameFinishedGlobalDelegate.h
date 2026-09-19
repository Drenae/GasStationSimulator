#pragma once
#include "CoreMinimal.h"
#include "OnMarshalWandsMinigameFinishedGlobalDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMarshalWandsMinigameFinishedGlobal, bool, bSuccess);

