#pragma once
#include "CoreMinimal.h"
#include "OnCarWashOpenStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCarWashOpenStateChanged, bool, bOpened);

