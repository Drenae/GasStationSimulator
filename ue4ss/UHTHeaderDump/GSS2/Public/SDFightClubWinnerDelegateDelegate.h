#pragma once
#include "CoreMinimal.h"
#include "ESDFightClubWinReason.h"
#include "ESDFightClubZone.h"
#include "SDFightClubWinnerDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDFightClubWinnerDelegate, ESDFightClubZone, Winner, ESDFightClubWinReason, WinReason);

