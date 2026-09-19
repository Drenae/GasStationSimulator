#pragma once
#include "CoreMinimal.h"
#include "EGameActivityType.h"
#include "OnGameActivityFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameActivityFinished, EGameActivityType, ActivityType);

