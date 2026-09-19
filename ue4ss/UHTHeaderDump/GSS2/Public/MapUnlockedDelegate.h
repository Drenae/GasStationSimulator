#pragma once
#include "CoreMinimal.h"
#include "MapUnlockedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapUnlocked, const FName, NameMap);

