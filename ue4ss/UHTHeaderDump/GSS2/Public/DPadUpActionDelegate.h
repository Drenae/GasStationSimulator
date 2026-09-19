#pragma once
#include "CoreMinimal.h"
#include "DPadUpActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDPadUpAction, bool, bIsPressed);

