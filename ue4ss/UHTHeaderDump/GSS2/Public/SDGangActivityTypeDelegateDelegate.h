#pragma once
#include "CoreMinimal.h"
#include "ESDGangActivityType.h"
#include "SDGangActivityTypeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSDGangActivityTypeDelegate, ESDGangActivityType, ActivityType);

