#pragma once
#include "CoreMinimal.h"
#include "OnNewLevelUnlockedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewLevelUnlocked, const int32, NewLevel);

