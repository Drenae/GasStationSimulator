#pragma once
#include "CoreMinimal.h"
#include "OnObjectiveFinishedDelegate.generated.h"

class UObjectiveBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectiveFinished, UObjectiveBase*, ObjectiveFinished);

