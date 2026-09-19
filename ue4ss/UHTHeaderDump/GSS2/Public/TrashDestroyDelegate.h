#pragma once
#include "CoreMinimal.h"
#include "TrashDestroyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrashDestroy, const bool, Success);

