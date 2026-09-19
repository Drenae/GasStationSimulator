#pragma once
#include "CoreMinimal.h"
#include "SprintActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSprintAction, bool, bIsPressed);

