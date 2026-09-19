#pragma once
#include "CoreMinimal.h"
#include "UnlockableUIState.h"
#include "OnNewUnlockableUIStateSetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewUnlockableUIStateSet, FUnlockableUIState, NewUnlockableUIState);

