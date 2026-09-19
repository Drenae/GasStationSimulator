#pragma once
#include "CoreMinimal.h"
#include "MinigameAction01Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMinigameAction01, const bool, bIsPressed);

