#pragma once
#include "CoreMinimal.h"
#include "MoveEndedDelegate.generated.h"

class ABBQItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMoveEnded, ABBQItem*, BBQItem);

