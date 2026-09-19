#pragma once
#include "CoreMinimal.h"
#include "OnLoginCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLoginCompleted, bool, bWasSuccessful, const FString&, UserId);

