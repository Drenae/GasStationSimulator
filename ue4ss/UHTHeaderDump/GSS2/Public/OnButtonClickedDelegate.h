#pragma once
#include "CoreMinimal.h"
#include "OnButtonClickedDelegate.generated.h"

class UPC_Base_Card;
class UPcBaseTab;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnButtonClicked, TSoftClassPtr<UPcBaseTab>, TabToCreate, UPC_Base_Card*, ButtonREF, bool, bReplaceExistingWidget);

