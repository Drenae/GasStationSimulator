#pragma once
#include "CoreMinimal.h"
#include "MapsLoadedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMapsLoaded, const bool, LoadedMaps, const bool, NewVersion);

