#pragma once
#include "CoreMinimal.h"
#include "SDGangActivityStartedDelegateDelegate.generated.h"

class USDGangActivityObjBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSDGangActivityStartedDelegate, USDGangActivityObjBase*, ActivityObj);

