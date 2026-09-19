#pragma once
#include "CoreMinimal.h"
#include "CraneMoveSidewaysDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCraneMoveSideways, float, Value);

