#pragma once
#include "CoreMinimal.h"
#include "GeneratedItem.h"
#include "TradeItemsReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTradeItemsReceived, const TArray<FGeneratedItem>&, ReceivedTradingItems);

