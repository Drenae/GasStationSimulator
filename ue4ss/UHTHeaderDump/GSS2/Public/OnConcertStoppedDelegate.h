#pragma once
#include "CoreMinimal.h"
#include "ERVCamperLeftReason.h"
#include "OnConcertStoppedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConcertStopped, ERVCamperLeftReason, CamperLeftReason);

