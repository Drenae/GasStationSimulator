#pragma once
#include "CoreMinimal.h"
#include "SDMouseTraceHoverCompDelegateDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSDMouseTraceHoverCompDelegate, UPrimitiveComponent*, Component);

