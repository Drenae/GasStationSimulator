#pragma once
#include "CoreMinimal.h"
#include "EBBQItemState.h"
#include "BBQItemStateChangedDelegate.generated.h"

class ABBQItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBBQItemStateChanged, ABBQItem*, Item, EBBQItemState, State);

