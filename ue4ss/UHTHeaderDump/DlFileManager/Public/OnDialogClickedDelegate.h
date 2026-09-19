#pragma once
#include "CoreMinimal.h"
#include "EDlFm_DialogEventType.h"
#include "OnDialogClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDialogClicked, EDlFm_DialogEventType, EventType);

