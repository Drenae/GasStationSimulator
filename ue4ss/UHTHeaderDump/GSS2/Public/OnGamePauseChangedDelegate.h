#pragma once
#include "CoreMinimal.h"
#include "OnGamePauseChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGamePauseChanged, bool, bPauseEnabled);

