#pragma once
#include "CoreMinimal.h"
#include "OnRuinsRemovedDelegate.generated.h"

class ARuins;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRuinsRemoved, ARuins*, Ruins);

