#pragma once
#include "CoreMinimal.h"
#include "OnButtonClickedRefDelegateDelegate.generated.h"

class URefButton;
class UUserWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnButtonClickedRefDelegate, URefButton*, ButtonREF, UUserWidget*, Widget);

