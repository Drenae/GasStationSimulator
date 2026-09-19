#pragma once
#include "CoreMinimal.h"
#include "InteractionRDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionR, bool, bIsPressed);

