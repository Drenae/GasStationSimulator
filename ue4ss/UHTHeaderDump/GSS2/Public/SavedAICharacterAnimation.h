#pragma once
#include "CoreMinimal.h"
#include "SavedAICharacterAnimation.generated.h"

USTRUCT(BlueprintType)
struct FSavedAICharacterAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSittingInCar;
    
    GSS2_API FSavedAICharacterAnimation();
};

