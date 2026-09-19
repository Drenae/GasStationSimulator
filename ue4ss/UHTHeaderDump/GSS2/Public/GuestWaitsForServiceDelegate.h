#pragma once
#include "CoreMinimal.h"
#include "GuestWaitsForServiceDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGuestWaitsForService, bool, bWaits);

