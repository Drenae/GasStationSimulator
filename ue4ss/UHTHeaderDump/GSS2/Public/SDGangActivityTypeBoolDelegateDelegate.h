#pragma once
#include "CoreMinimal.h"
#include "ESDGangActivityType.h"
#include "SDGangActivityTypeBoolDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDGangActivityTypeBoolDelegate, ESDGangActivityType, ActivityType, bool, bValue);

