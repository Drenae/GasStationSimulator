#pragma once
#include "CoreMinimal.h"
#include "EDLCName.h"
#include "OnDialogRequestFinishActiveObjectiveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDialogRequestFinishActiveObjective, EDLCName, RelatedDLCName);

