#pragma once
#include "CoreMinimal.h"
#include "YButtonActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYButtonAction, bool, bIsPressed);

