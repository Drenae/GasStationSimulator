#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PlayerShelvProductDelegate.generated.h"

class AProduct;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerShelvProduct, TSubclassOf<AProduct>, ProductOnShelv, const int32, Amount);

