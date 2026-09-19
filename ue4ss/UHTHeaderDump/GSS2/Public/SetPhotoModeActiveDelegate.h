#pragma once
#include "CoreMinimal.h"
#include "SetPhotoModeActiveDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSetPhotoModeActive, const bool, PhotoModeActive);

