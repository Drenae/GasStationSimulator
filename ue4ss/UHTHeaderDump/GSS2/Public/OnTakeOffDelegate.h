#pragma once
#include "CoreMinimal.h"
#include "ERunway.h"
#include "OnTakeOffDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTakeOff, ERunway, Runway);

