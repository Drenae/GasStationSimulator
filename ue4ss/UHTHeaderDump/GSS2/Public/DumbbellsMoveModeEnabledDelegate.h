#pragma once
#include "CoreMinimal.h"
#include "DumbbellsMoveModeEnabledDelegate.generated.h"

class ADumbbellItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDumbbellsMoveModeEnabled, bool, bEnabled, ADumbbellItem*, Item);

