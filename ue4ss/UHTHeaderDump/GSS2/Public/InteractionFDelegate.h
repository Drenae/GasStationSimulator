#pragma once
#include "CoreMinimal.h"
#include "InteractionFDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionF, bool, bIsPressed);

