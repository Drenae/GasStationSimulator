#pragma once
#include "CoreMinimal.h"
#include "ESDFightClubGloves.h"
#include "SDFightClubLockerGlovesDelegateDelegate.generated.h"

class ASDFightClubLockerMinigame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDFightClubLockerGlovesDelegate, ASDFightClubLockerMinigame*, Locker, ESDFightClubGloves, Gloves);

