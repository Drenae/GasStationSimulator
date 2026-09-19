#pragma once
#include "CoreMinimal.h"
#include "EDLCName.h"
#include "DLCActivationStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDLCActivationStateChanged, EDLCName, DLCName, bool, bActivated);

