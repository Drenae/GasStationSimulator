#pragma once
#include "CoreMinimal.h"
#include "OnConnectionToEOSChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConnectionToEOSChanged, bool, bConnectionEnabled);

