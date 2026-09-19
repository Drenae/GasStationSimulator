#pragma once
#include "CoreMinimal.h"
#include "OnPlayerCacheFilesCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnPlayerCacheFilesCompleted, bool, bWasSuccessfull, const int32, LocalPlayerNum, const FString&, ErrorString, const FString&, TagName);

