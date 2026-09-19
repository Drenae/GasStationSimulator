#pragma once
#include "CoreMinimal.h"
#include "PlaneEntry.h"
#include "RunwayEntriesSetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRunwayEntriesSet, const TArray<FPlaneEntry>&, Schedule);

