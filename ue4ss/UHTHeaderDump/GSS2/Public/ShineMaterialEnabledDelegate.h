#pragma once
#include "CoreMinimal.h"
#include "ShineMaterialEnabledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShineMaterialEnabled, bool, bEnabled);

