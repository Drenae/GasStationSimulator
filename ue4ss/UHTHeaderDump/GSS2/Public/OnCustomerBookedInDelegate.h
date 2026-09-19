#pragma once
#include "CoreMinimal.h"
#include "OnCustomerBookedInDelegate.generated.h"

class URVCustomerData;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCustomerBookedIn, URVCustomerData*, CustomerData);

