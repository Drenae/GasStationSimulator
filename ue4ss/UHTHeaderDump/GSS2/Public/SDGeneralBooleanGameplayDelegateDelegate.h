#pragma once
#include "CoreMinimal.h"
#include "SDGeneralBooleanGameplayDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSDGeneralBooleanGameplayDelegate, bool, bValue);

