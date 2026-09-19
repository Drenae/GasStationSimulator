#pragma once
#include "CoreMinimal.h"
#include "ERVResource.h"
#include "OnResourceUpgradedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnResourceUpgraded, ERVResource, Resource, int32, NewLevel);

