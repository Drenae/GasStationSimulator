#pragma once
#include "CoreMinimal.h"
#include "UpgradingProcessFinishedDelegate.generated.h"

class AUpgradeStationCamera;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpgradingProcessFinished, AUpgradeStationCamera*, _FinishedUpgradeCamera);

