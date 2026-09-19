#pragma once
#include "CoreMinimal.h"
#include "PartySpotClosedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPartySpotClosed, const bool, bIsOpen);

