#pragma once
#include "CoreMinimal.h"
#include "PlaneEntry.h"
#include "NewPlaneEntryDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewPlaneEntry, const FPlaneEntry&, NewEntry);

