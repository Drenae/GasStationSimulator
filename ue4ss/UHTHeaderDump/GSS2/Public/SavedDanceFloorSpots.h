#pragma once
#include "CoreMinimal.h"
#include "SavedDefaultActor.h"
#include "SavedSpotToDance.h"
#include "SavedDanceFloorSpots.generated.h"

USTRUCT(BlueprintType)
struct FSavedDanceFloorSpots {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedDefaultActor SavedDefaultActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSavedSpotToDance> SavedDanceFloorSpots;
    
    GSS2_API FSavedDanceFloorSpots();
};

