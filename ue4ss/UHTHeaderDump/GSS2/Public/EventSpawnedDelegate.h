#pragma once
#include "CoreMinimal.h"
#include "EventSpawnedDelegate.generated.h"

class UGSSEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventSpawned, const UGSSEvent*, GSSEvent);

