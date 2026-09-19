#pragma once
#include "CoreMinimal.h"
#include "FoundSessionParams.h"
#include "OnSessionSearchedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSessionSearched, bool, bWasSuccessful, const TArray<FFoundSessionParams>&, FoundSessions);

