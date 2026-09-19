#pragma once
#include "CoreMinimal.h"
#include "ToggleSnapToGridDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FToggleSnapToGrid, bool, bIsPressed);

