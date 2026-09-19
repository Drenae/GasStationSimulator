#pragma once
#include "CoreMinimal.h"
#include "CarSpawnedFromSaveDelegate.generated.h"

class AJunkyardCarWreck;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCarSpawnedFromSave, AJunkyardCarWreck*, CarWreck);

