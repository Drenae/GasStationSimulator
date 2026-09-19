#pragma once
#include "CoreMinimal.h"
#include "ESDFightClubPhase.h"
#include "SDFightClubPhaseDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSDFightClubPhaseDelegate, ESDFightClubPhase, Phase);

