#pragma once
#include "CoreMinimal.h"
#include "BasketItemStruct.h"
#include "OnAmmountChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAmmountChanged, FBasketItemStruct, ItemStruct);

