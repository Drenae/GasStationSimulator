#pragma once
#include "CoreMinimal.h"
#include "OnIsUnpaidUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsUnpaidUpdated, const bool, IsUnpaid);

