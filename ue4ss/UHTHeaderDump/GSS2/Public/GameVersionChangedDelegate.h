#pragma once
#include "CoreMinimal.h"
#include "GameVersionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameVersionChanged, const int32, CurrentGameVersion, const int32, PreviousGameVersion);

