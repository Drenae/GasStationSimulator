#pragma once
#include "CoreMinimal.h"
#include "DPadRightActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDPadRightAction, bool, bIsPressed);

