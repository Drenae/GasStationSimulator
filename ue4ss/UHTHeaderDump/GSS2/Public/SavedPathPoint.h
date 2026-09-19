#pragma once
#include "CoreMinimal.h"
#include "SavedPathPoint.generated.h"

USTRUCT(BlueprintType)
struct FSavedPathPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOccupied;
    
    GSS2_API FSavedPathPoint();
};

