#pragma once
#include "CoreMinimal.h"
#include "EAIState.h"
#include "TaskUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTaskUpdate, const EAIState, TaskState);

