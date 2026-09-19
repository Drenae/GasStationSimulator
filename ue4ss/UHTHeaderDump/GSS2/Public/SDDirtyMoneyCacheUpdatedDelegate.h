#pragma once
#include "CoreMinimal.h"
#include "SDDirtyMoneyCacheUpdatedDelegate.generated.h"

class ASDDirtyMoneyCache;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSDDirtyMoneyCacheUpdated, ASDDirtyMoneyCache*, DirtyMoneyCache);

