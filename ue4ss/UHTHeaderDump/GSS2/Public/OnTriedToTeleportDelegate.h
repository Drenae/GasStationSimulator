#pragma once
#include "CoreMinimal.h"
#include "OnTriedToTeleportDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTriedToTeleport, const bool, bSuccessful);

