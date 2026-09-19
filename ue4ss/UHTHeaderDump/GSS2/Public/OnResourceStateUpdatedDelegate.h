#pragma once
#include "CoreMinimal.h"
#include "ERVResource.h"
#include "RVResourceState.h"
#include "OnResourceStateUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnResourceStateUpdated, ERVResource, Resource, FRVResourceState, OldState, FRVResourceState, NewState);

