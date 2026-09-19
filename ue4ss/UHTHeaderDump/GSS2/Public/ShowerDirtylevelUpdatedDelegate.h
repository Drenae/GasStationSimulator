#pragma once
#include "CoreMinimal.h"
#include "ShowerDirtylevelUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowerDirtylevelUpdated, const float, ShowerDirtyPercentage);

