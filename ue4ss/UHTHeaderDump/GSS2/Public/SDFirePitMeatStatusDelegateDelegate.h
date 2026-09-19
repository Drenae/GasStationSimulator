#pragma once
#include "CoreMinimal.h"
#include "ESDFirePitMeatStatus.h"
#include "SDFirePitMeatStatusDelegateDelegate.generated.h"

class ASDFirePitMinigame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDFirePitMeatStatusDelegate, ASDFirePitMinigame*, FirePit, ESDFirePitMeatStatus, MeatStatus);

