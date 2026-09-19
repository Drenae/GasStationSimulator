#pragma once
#include "CoreMinimal.h"
#include "ECarWreckState.h"
#include "OnStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateChanged, ECarWreckState, NewState);

