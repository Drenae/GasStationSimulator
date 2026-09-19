#pragma once
#include "CoreMinimal.h"
#include "OnCinemaMutedUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCinemaMutedUpdated, bool, IsMuted);

