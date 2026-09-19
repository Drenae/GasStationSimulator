#pragma once
#include "CoreMinimal.h"
#include "OnCinemaProjectorMovieTimeUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCinemaProjectorMovieTimeUpdate, float, NewTime);

