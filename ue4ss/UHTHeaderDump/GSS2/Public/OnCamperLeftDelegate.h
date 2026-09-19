#pragma once
#include "CoreMinimal.h"
#include "OnCamperLeftDelegate.generated.h"

class URVCamperComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCamperLeft, URVCamperComponent*, Camper);

