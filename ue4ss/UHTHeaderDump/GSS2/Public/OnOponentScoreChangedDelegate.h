#pragma once
#include "CoreMinimal.h"
#include "OnOponentScoreChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOponentScoreChanged, float, NewScore);

