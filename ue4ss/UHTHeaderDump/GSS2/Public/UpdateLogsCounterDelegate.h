#pragma once
#include "CoreMinimal.h"
#include "UpdateLogsCounterDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateLogsCounter, int32, CutedLogsCounter, int32, MaxLogsToCut);

