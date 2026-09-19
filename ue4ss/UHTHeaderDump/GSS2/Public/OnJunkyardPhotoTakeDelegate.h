#pragma once
#include "CoreMinimal.h"
#include "OnJunkyardPhotoTakeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJunkyardPhotoTake, const FString&, FilePath);

