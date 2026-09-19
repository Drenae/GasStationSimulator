#pragma once
#include "CoreMinimal.h"
#include "EChunchumanchuAnger.h"
#include "ChunchumanchuAngerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChunchumanchuAnger, EChunchumanchuAnger, AngerLevel);

