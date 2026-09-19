#pragma once
#include "CoreMinimal.h"
#include "OnItemSacrifiedDelegate.generated.h"

class AItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemSacrified, TSoftClassPtr<AItem>, ItemSacrified, const int32, Amount);

