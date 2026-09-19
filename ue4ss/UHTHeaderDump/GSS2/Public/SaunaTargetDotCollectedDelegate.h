#pragma once
#include "CoreMinimal.h"
#include "SaunaTargetDotCollectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSaunaTargetDotCollected, int32, CollectedTargetDots);

