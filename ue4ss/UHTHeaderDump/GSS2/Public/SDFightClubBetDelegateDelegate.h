#pragma once
#include "CoreMinimal.h"
#include "ESDFightClubZone.h"
#include "SDFightClubBetDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDFightClubBetDelegate, ESDFightClubZone, Zone, float, Bet);

