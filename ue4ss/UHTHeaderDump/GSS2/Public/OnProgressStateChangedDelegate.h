#pragma once
#include "CoreMinimal.h"
#include "EProgressState.h"
#include "OnProgressStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProgressStateChanged, EProgressState, CurrentProgressState);

