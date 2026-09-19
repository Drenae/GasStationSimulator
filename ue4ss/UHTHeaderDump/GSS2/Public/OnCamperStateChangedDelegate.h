#pragma once
#include "CoreMinimal.h"
#include "ERVCamperState.h"
#include "OnCamperStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCamperStateChanged, ERVCamperState, NewState);

