#pragma once
#include "CoreMinimal.h"
#include "OnCraneEnteredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCraneEntered, bool, EnteredByPlayer);

