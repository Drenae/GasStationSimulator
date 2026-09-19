#pragma once
#include "CoreMinimal.h"
#include "TimeStruct.h"
#include "GameTimeUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameTimeUpdate, const FTimeStruct, UpdatedTime);

