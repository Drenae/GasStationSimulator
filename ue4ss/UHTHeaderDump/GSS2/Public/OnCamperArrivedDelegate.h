#pragma once
#include "CoreMinimal.h"
#include "OnCamperArrivedDelegate.generated.h"

class URVCamperComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCamperArrived, URVCamperComponent*, Camper);

