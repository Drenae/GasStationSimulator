#pragma once
#include "CoreMinimal.h"
#include "StrikeUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStrikeUpdate, int32, Val);

