#pragma once
#include "CoreMinimal.h"
#include "DPadLeftActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDPadLeftAction, bool, bIsPressed);

