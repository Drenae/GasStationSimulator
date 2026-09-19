#pragma once
#include "CoreMinimal.h"
#include "LoadGameProgressUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FLoadGameProgressUpdated, const float, CurrentProgress, const float, MaxProgress, const FName, LoadedMap, const bool, LoadGameCompleted);

