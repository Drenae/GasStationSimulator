#pragma once
#include "CoreMinimal.h"
#include "OnEventCreatedDelegate.generated.h"

class UGSSEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventCreated, UGSSEvent*, GSSEvent);

