#pragma once
#include "CoreMinimal.h"
#include "OnInterestedCustomersUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInterestedCustomersUpdated, bool, WereAllCustomersUpdated, int32, UpdatedCustomerIndex);

