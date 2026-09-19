#pragma once
#include "CoreMinimal.h"
#include "RotateLeftActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRotateLeftAction, bool, bIsPressed);

