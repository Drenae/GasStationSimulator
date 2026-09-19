#pragma once
#include "CoreMinimal.h"
#include "OnPlaneRotationStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlaneRotationStatusChanged, bool, bIsInGoodRotation);

