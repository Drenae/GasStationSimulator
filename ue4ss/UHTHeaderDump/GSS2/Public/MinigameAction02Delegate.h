#pragma once
#include "CoreMinimal.h"
#include "MinigameAction02Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMinigameAction02, const bool, bIsPressed);

