#pragma once
#include "CoreMinimal.h"
#include "TurnActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTurnAction, float, Val);

