#pragma once
#include "CoreMinimal.h"
#include "ECircularMenuChoice.h"
#include "OnToolSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToolSelected, ECircularMenuChoice, WeaponType);

