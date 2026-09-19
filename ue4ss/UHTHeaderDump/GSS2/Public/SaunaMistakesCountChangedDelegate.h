#pragma once
#include "CoreMinimal.h"
#include "SaunaMistakesCountChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSaunaMistakesCountChanged, int32, Mistakes, int32, OldMistakes);

