#pragma once
#include "CoreMinimal.h"
#include "GamepadModeToggleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGamepadModeToggle, bool, bNewGamepadMode);

