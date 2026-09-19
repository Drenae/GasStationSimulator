#pragma once
#include "CoreMinimal.h"
#include "OnCustomerDieDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCustomerDie, const FString&, Reason);

