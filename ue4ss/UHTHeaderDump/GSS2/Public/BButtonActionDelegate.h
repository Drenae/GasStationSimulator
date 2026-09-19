#pragma once
#include "CoreMinimal.h"
#include "BButtonActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBButtonAction, bool, bIsPressed);

