#pragma once
#include "CoreMinimal.h"
#include "DirtyLevelUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDirtyLevelUpdate, const float, HouseDirtyPercent, const float, ToiletDirtyPercent, const float, ShowerDirtyPercent);

