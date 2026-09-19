#pragma once
#include "CoreMinimal.h"
#include "OnPicnicItemGrabbedDelegate.generated.h"

class APicnicProduct;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPicnicItemGrabbed, APicnicProduct*, Product);

