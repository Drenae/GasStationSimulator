#pragma once
#include "CoreMinimal.h"
#include "OnButtonClickedFloatDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButtonClickedFloat, float, Value);

