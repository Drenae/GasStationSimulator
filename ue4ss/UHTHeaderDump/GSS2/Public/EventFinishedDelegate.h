#pragma once
#include "CoreMinimal.h"
#include "EventFinishedDelegate.generated.h"

class UGSSEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventFinished, const UGSSEvent*, GSSEvent);

