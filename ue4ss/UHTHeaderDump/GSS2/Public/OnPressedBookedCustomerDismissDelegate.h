#pragma once
#include "CoreMinimal.h"
#include "OnPressedBookedCustomerDismissDelegate.generated.h"

class URVCustomerData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPressedBookedCustomerDismiss, URVCustomerData*, CustomerData);

