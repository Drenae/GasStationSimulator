#pragma once
#include "CoreMinimal.h"
#include "OnJunkyardActionFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJunkyardActionFinished, const FString&, Action);

