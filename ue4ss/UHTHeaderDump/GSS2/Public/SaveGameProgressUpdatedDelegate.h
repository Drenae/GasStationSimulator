#pragma once
#include "CoreMinimal.h"
#include "SaveGameProgressUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSaveGameProgressUpdated, const float, CurrentProgress, const float, MaxProgress, const bool, SaveGameCompleted);

