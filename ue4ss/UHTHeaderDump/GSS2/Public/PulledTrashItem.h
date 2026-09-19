#pragma once
#include "CoreMinimal.h"
#include "PulledTrashItem.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GSS2_API FPulledTrashItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PulledActor;
    
    FPulledTrashItem();
};

