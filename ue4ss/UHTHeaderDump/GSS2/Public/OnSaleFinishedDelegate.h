#pragma once
#include "CoreMinimal.h"
#include "SaleSlot.h"
#include "OnSaleFinishedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSaleFinished, const FSaleSlot&, SaleSlot, const bool, bCarSold);

