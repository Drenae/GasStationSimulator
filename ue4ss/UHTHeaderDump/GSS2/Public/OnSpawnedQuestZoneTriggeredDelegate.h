#pragma once
#include "CoreMinimal.h"
#include "OnSpawnedQuestZoneTriggeredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpawnedQuestZoneTriggered, FName, ZoneID);

