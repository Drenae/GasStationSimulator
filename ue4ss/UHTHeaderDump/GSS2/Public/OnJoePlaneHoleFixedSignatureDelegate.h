#pragma once
#include "CoreMinimal.h"
#include "OnJoePlaneHoleFixedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJoePlaneHoleFixedSignature, int32, FixedHoles, int32, NumberOfAllHoles);

