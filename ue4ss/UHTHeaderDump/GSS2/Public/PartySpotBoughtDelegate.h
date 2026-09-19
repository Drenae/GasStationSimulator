#pragma once
#include "CoreMinimal.h"
#include "PartySpotBoughtDelegate.generated.h"

class APartySpotTable;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPartySpotBought, const APartySpotTable*, BoughtTable);

