#pragma once
#include "CoreMinimal.h"
#include "OnPlayerFileWriteCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayerFileWriteCompleted, bool, bWasSuccessfull, const int32, LocalPlayerNum, const FString&, Filename);

