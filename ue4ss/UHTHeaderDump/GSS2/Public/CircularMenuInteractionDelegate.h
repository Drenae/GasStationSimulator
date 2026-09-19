#pragma once
#include "CoreMinimal.h"
#include "EInteractionOutput.h"
#include "CircularMenuInteractionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCircularMenuInteraction, const EInteractionOutput&, Branches, bool, bGamepadInitialized);

