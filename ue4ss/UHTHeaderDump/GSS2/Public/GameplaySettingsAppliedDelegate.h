#pragma once
#include "CoreMinimal.h"
#include "GameplaySettingsAppliedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGameplaySettingsApplied, bool, bAppliedSetting);

