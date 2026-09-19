#pragma once
#include "CoreMinimal.h"
#include "NPTimeStruct.h"
#include "NPGameTimeUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNPGameTimeUpdate, const FNPTimeStruct, UpdatedTime);

