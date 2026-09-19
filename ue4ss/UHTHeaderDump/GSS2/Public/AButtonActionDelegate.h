#pragma once
#include "CoreMinimal.h"
#include "AButtonActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAButtonAction, bool, bIsPressed);

