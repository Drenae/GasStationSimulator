#pragma once
#include "CoreMinimal.h"
#include "OnTrashBinEmptiedDelegate.generated.h"

class ATrashBin;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTrashBinEmptied, ATrashBin*, TrashBin);

