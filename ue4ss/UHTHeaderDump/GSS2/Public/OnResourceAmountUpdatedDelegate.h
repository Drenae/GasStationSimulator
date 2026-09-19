#pragma once
#include "CoreMinimal.h"
#include "ERVResource.h"
#include "OnResourceAmountUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnResourceAmountUpdated, ERVResource, Resource, int32, OldAmount, int32, NewAmount);

