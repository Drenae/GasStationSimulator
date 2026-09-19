#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CollectibleItems -ObjectName=CollectibleCardStruct -FallbackName=CollectibleCardStruct
#include "OnCardRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCardRemoved, FCollectibleCardStruct, CardStruct);

