#pragma once
#include "CoreMinimal.h"
#include "StartOverheadInformationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartOverheadInformation, const int32, InformationID);

