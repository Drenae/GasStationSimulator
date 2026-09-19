#pragma once
#include "CoreMinimal.h"
#include "UnlockCameraDeactivatedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnlockCameraDeactivated, const AActor*, Camera);

