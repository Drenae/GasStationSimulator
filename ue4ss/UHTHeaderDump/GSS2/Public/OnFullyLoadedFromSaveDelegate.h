#pragma once
#include "CoreMinimal.h"
#include "OnFullyLoadedFromSaveDelegate.generated.h"

class AJunkyardCarWreck;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFullyLoadedFromSave, AJunkyardCarWreck*, Wreck);

