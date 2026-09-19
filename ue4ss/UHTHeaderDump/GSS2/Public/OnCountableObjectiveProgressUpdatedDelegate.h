#pragma once
#include "CoreMinimal.h"
#include "OnCountableObjectiveProgressUpdatedDelegate.generated.h"

class UCountableObjectiveBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCountableObjectiveProgressUpdated, UCountableObjectiveBase*, CountableObjective, int32, CurrentValue, bool, bShowAnim);

