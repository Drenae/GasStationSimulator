#pragma once
#include "CoreMinimal.h"
#include "SoftenedStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSoftenedStateChanged, bool, bNewSoftened);

