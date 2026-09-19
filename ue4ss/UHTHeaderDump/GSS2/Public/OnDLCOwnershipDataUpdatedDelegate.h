#pragma once
#include "CoreMinimal.h"
#include "OnDLCOwnershipDataUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDLCOwnershipDataUpdated, const bool, OnlineServicesQueried);

