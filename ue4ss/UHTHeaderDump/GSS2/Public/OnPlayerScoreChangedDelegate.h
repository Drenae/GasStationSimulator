#pragma once
#include "CoreMinimal.h"
#include "OnPlayerScoreChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerScoreChanged, float, NewScore);

