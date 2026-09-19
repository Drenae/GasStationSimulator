#pragma once
#include "CoreMinimal.h"
#include "SavedDefaultActor.h"
#include "SavedDecorations.generated.h"

USTRUCT(BlueprintType)
struct FSavedDecorations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedDefaultActor SavedDefaultActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SnapPointName;
    
    GSS2_API FSavedDecorations();
};

