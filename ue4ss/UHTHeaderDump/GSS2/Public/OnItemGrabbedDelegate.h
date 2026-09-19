#pragma once
#include "CoreMinimal.h"
#include "OnItemGrabbedDelegate.generated.h"

class APicnicProduct;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemGrabbed, APicnicProduct*, Product);

