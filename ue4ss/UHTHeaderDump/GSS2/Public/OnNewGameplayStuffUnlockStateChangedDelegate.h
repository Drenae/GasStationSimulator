#pragma once
#include "CoreMinimal.h"
#include "UnlockableGameplayStuffState.h"
#include "OnNewGameplayStuffUnlockStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewGameplayStuffUnlockStateChanged, FUnlockableGameplayStuffState, NewUnlockableGameplayStuffState);

