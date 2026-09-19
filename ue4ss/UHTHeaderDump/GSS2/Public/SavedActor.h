#pragma once
#include "CoreMinimal.h"
#include "SavedActor.generated.h"

USTRUCT(BlueprintType)
struct FSavedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathName;
    
    GSS2_API FSavedActor();
};

