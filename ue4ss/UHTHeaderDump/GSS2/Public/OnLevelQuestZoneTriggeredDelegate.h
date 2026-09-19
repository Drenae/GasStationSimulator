#pragma once
#include "CoreMinimal.h"
#include "OnLevelQuestZoneTriggeredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLevelQuestZoneTriggered, FName, LevelName);

