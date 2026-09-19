#pragma once
#include "CoreMinimal.h"
#include "XButtonActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FXButtonAction, bool, bIsPressed);

