#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "SDTimerHandleDelegatePair.generated.h"

USTRUCT(BlueprintType)
struct FSDTimerHandleDelegatePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle Handle;
    
    GSS2_API FSDTimerHandleDelegatePair();
};

