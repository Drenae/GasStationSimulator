#pragma once
#include "CoreMinimal.h"
#include "EJoeAirplaneState.h"
#include "OnJoePlaneStateChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoePlaneStateChangedSignature, EJoeAirplaneState, NewPlaneState);

