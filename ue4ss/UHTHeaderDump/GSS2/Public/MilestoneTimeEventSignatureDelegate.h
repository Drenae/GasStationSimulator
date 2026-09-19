#pragma once
#include "CoreMinimal.h"
#include "TimeStruct.h"
#include "MilestoneTimeEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMilestoneTimeEventSignature, const FTimeStruct, UpdatedTime);

