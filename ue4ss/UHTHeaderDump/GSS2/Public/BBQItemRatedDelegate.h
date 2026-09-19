#pragma once
#include "CoreMinimal.h"
#include "BBQItemRatedDelegate.generated.h"

class ABBQItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBBQItemRated, ABBQItem*, Item);

