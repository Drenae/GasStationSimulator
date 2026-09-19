#pragma once
#include "CoreMinimal.h"
#include "RestockProductData.h"
#include "OnShelfRestockFillingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShelfRestockFillingChanged, const FRestockProductData&, CapacityChange);

