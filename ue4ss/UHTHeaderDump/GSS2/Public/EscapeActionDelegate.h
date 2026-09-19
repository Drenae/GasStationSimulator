#pragma once
#include "CoreMinimal.h"
#include "EscapeActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEscapeAction, bool, bIsPressed);

