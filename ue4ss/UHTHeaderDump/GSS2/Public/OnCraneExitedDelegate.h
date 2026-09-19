#pragma once
#include "CoreMinimal.h"
#include "OnCraneExitedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCraneExited, bool, ExitedByPlayer);

