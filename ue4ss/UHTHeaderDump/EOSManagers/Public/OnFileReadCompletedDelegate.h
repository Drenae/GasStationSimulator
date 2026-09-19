#pragma once
#include "CoreMinimal.h"
#include "OnFileReadCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFileReadCompleted, bool, bWasSuccesfull, const FString&, Filename, const TArray<uint8>&, FileContent);

