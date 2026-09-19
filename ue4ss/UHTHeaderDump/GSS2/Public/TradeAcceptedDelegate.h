#pragma once
#include "CoreMinimal.h"
#include "ECountryOfOrigin.h"
#include "ENPCGender.h"
#include "TradeAcceptedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FTradeAccepted, bool, bIsTradeAccepted, float, AddedImpatience, ENPCGender, PilotGender, ECountryOfOrigin, CountryOfOrigin);

