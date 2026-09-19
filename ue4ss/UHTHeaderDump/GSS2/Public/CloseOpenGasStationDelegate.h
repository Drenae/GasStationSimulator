#pragma once
#include "CoreMinimal.h"
#include "CloseOpenGasStationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCloseOpenGasStation, const bool, bIsOpen);

