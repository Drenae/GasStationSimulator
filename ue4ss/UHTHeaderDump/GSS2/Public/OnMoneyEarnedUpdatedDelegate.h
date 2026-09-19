#pragma once
#include "CoreMinimal.h"
#include "OnMoneyEarnedUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoneyEarnedUpdated, const float, CurrentMoneyEarned);

