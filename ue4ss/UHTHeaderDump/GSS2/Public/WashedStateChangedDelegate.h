#pragma once
#include "CoreMinimal.h"
#include "WashedStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWashedStateChanged, bool, bNewWashed);

