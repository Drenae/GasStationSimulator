#pragma once
#include "CoreMinimal.h"
#include "OnCinemaCustomMovieUploadedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCinemaCustomMovieUploaded, const FString&, MoviePath);

