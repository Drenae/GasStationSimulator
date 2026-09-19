#pragma once
#include "CoreMinimal.h"
#include "SavedSpotToDance.generated.h"

USTRUCT(BlueprintType)
struct FSavedSpotToDance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AICharacterPathName;
    
    GSS2_API FSavedSpotToDance();
};

