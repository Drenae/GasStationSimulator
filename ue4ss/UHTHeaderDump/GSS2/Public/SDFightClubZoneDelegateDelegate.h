#pragma once
#include "CoreMinimal.h"
#include "ESDFightClubZone.h"
#include "SDFightClubZoneDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSDFightClubZoneDelegate, ESDFightClubZone, Zone);

