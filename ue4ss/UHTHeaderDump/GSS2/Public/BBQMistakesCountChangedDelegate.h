#pragma once
#include "CoreMinimal.h"
#include "BBQMistakesCountChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBBQMistakesCountChanged, int32, Mistakes, int32, OldMistakes);

