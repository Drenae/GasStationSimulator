#pragma once
#include "CoreMinimal.h"
#include "OnClickedEventDelegate.generated.h"

class UPC_TopMenuButton;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClickedEvent, UPC_TopMenuButton*, ButtonREF);

