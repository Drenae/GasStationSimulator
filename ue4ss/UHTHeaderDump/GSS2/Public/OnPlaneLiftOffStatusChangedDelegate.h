#pragma once
#include "CoreMinimal.h"
#include "OnPlaneLiftOffStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlaneLiftOffStatusChanged, bool, bCanLiftOff);

