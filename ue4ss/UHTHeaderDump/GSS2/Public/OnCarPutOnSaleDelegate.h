#pragma once
#include "CoreMinimal.h"
#include "SaleSlot.h"
#include "OnCarPutOnSaleDelegate.generated.h"

class AJunkyardCarWreck;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCarPutOnSale, const FSaleSlot&, SaleSlot, const AJunkyardCarWreck*, CarWreck);

