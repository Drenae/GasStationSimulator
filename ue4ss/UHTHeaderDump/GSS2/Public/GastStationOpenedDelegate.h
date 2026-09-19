#pragma once
#include "CoreMinimal.h"
#include "GastStationOpenedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGastStationOpened, const bool, bIsOpen);

