#pragma once
#include "CoreMinimal.h"
#include "EventMaxMagnetDownDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventMaxMagnetDown, bool, bMaxMagnetDown);

