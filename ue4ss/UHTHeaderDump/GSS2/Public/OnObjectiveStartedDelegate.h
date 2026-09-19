#pragma once
#include "CoreMinimal.h"
#include "OnObjectiveStartedDelegate.generated.h"

class UObjectiveBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnObjectiveStarted, UObjectiveBase*, ObjectiveStarted);

