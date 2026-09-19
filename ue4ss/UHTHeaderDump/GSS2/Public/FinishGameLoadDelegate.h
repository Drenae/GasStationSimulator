#pragma once
#include "CoreMinimal.h"
#include "FinishGameLoadDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFinishGameLoad, const bool, GameLoaded);

