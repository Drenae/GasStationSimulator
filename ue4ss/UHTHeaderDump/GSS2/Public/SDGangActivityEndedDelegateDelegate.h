#pragma once
#include "CoreMinimal.h"
#include "ESDGangActivityResult.h"
#include "SDGangActivityEndedDelegateDelegate.generated.h"

class USDGangActivityObjBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSDGangActivityEndedDelegate, USDGangActivityObjBase*, ActivityObj, ESDGangActivityResult, Result);

