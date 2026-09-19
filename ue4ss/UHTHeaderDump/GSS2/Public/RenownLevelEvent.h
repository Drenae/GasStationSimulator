#pragma once
#include "CoreMinimal.h"
#include "RenownLevelEvent.generated.h"

class UEventDisplay;

USTRUCT(BlueprintType)
struct GSS2_API FRenownLevelEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEventDisplay> EventToDisplay;
    
    FRenownLevelEvent();
};

