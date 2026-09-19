#pragma once
#include "CoreMinimal.h"
#include "ChangedTableSettingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangedTableSetting, bool, bAppliedSetting);

