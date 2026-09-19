#pragma once
#include "CoreMinimal.h"
#include "OnPlayerFileReadCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnPlayerFileReadCompleted, bool, bWasSuccesfull, const int32, LocalPlayerNum, const FString&, Filename, const TArray<uint8>&, FileContent);

