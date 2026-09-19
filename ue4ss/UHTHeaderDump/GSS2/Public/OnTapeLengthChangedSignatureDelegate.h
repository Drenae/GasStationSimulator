#pragma once
#include "CoreMinimal.h"
#include "OnTapeLengthChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTapeLengthChangedSignature, float, CurrentTapeLength);

