#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EUnlockableGameplayStuffState.h"
#include "UnlockableGameplayStuffState.generated.h"

USTRUCT(BlueprintType)
struct GSS2_API FUnlockableGameplayStuffState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnlockableGameplayStuffState State;
    
    FUnlockableGameplayStuffState();
};

