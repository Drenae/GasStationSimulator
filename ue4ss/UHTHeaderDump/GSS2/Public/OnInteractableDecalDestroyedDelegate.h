#pragma once
#include "CoreMinimal.h"
#include "EDecalType.h"
#include "OnInteractableDecalDestroyedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractableDecalDestroyed, EDecalType, DecalType);

