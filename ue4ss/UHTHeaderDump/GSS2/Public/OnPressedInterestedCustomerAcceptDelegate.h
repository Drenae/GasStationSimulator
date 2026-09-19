#pragma once
#include "CoreMinimal.h"
#include "OnPressedInterestedCustomerAcceptDelegate.generated.h"

class URVCustomerData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPressedInterestedCustomerAccept, URVCustomerData*, CustomerData);

