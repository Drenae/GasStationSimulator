#pragma once
#include "CoreMinimal.h"
#include "JoeOrderInfo.h"
#include "JoeOrderGeneratedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FJoeOrderGenerated, const FJoeOrderInfo&, JoeOrderInfo);

