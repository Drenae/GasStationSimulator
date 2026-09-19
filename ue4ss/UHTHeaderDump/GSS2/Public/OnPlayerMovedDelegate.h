#pragma once
#include "CoreMinimal.h"
#include "OnPlayerMovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerMoved, float, Value);

