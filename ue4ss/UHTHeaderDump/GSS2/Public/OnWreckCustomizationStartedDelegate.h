#pragma once
#include "CoreMinimal.h"
#include "OnWreckCustomizationStartedDelegate.generated.h"

class ACarWreckPlaceableArea;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWreckCustomizationStarted, ACarWreckPlaceableArea*, Area);

