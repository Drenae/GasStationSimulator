#pragma once
#include "CoreMinimal.h"
#include "OnMaskOpenedDelegate.generated.h"

class ABackMask;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaskOpened, ABackMask*, OpenedMask);

