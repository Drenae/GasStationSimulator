#pragma once
#include "CoreMinimal.h"
#include "SDShadynessModifierDelegateDelegate.generated.h"

class USDShadynessModifierBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSDShadynessModifierDelegate, USDShadynessModifierBase*, Modifier);

