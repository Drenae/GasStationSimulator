#pragma once
#include "CoreMinimal.h"
#include "InspectModeActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInspectModeAction, bool, bIsPressed);

