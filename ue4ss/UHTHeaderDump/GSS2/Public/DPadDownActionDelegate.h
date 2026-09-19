#pragma once
#include "CoreMinimal.h"
#include "DPadDownActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDPadDownAction, bool, bIsPressed);

