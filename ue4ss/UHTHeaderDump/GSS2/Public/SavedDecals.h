#pragma once
#include "CoreMinimal.h"
#include "SavedDefaultActor.h"
#include "SavedDecals.generated.h"

USTRUCT(BlueprintType)
struct FSavedDecals {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedDefaultActor SavedDefaultActor;
    
    GSS2_API FSavedDecals();
};

