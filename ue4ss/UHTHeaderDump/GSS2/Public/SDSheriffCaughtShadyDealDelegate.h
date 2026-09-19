#pragma once
#include "CoreMinimal.h"
#include "SDSheriffCaughtShadyDealDelegate.generated.h"

class USDGangActivityObjBase;
class USDSheriffActionBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDSheriffCaughtShadyDeal, USDGangActivityObjBase*, GangActivity, const TArray<USDSheriffActionBase*>&, PerformedActions);

