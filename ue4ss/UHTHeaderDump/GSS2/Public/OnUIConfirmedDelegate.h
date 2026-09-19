#pragma once
#include "CoreMinimal.h"
#include "OnUIConfirmedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUIConfirmed, bool, bFake);

