#pragma once
#include "CoreMinimal.h"
#include "EventDestroyedDelegate.generated.h"

class UGSSEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventDestroyed, UGSSEvent*, GSSEvent);

