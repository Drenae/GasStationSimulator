#pragma once
#include "CoreMinimal.h"
#include "EItemIconVisibility.h"
#include "NewItemRevealedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FNewItemRevealed, const int32, PlaneIndex, const int32, ItemIndex, const EItemIconVisibility, IconVisibility);

