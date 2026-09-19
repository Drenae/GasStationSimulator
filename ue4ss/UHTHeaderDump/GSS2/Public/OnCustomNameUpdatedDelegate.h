#pragma once
#include "CoreMinimal.h"
#include "OnCustomNameUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCustomNameUpdated, const FString&, NewCustomName);

