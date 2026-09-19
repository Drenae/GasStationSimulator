#pragma once
#include "CoreMinimal.h"
#include "OnUIRejectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUIRejected, bool, bFake);

