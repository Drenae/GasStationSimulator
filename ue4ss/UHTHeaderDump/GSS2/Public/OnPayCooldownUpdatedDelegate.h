#pragma once
#include "CoreMinimal.h"
#include "TimeStruct.h"
#include "OnPayCooldownUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPayCooldownUpdated, const FTimeStruct, PayCooldown);

