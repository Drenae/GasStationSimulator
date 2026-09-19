#pragma once
#include "CoreMinimal.h"
#include "OnAchievementWrittenEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAchievementWrittenEvent, bool, bWasSuccessfull);

