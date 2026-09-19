#pragma once
#include "CoreMinimal.h"
#include "MoneyStatusDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMoneyStatus, const float, LeftMoney);

