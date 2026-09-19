#pragma once
#include "CoreMinimal.h"
#include "KeybindingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKeybindingChanged, const FName, ActionName);

