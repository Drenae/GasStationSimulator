#pragma once
#include "CoreMinimal.h"
#include "OnCacheFilesCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCacheFilesCompleted, bool, bWasSuccessfull, const FString&, ErrorString, const FString&, TagName);

