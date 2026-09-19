#pragma once
#include "CoreMinimal.h"
#include "SpawnedProductDelegate.generated.h"

class AProduct;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpawnedProduct, AProduct*, _SpawnedProduct);

