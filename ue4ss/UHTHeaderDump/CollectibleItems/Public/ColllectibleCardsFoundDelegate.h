#pragma once
#include "CoreMinimal.h"
#include "CollectibleCardStruct.h"
#include "ColllectibleCardsFoundDelegate.generated.h"

class UCollectiblesInventoryComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FColllectibleCardsFound, TArray<FCollectibleCardStruct>, FoundCards, UCollectiblesInventoryComponent*, InventoryComponent);

