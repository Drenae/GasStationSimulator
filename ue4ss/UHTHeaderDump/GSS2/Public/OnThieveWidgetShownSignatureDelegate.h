#pragma once
#include "CoreMinimal.h"
#include "OnThieveWidgetShownSignatureDelegate.generated.h"

class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnThieveWidgetShownSignature, UUserWidget*, ThieveWidgetInstence);

