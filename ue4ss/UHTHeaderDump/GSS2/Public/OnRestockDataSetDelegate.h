#pragma once
#include "CoreMinimal.h"
#include "OnRestockDataSetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRestockDataSet, bool, IsSuccess);

