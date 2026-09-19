#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "RVChallengeCondition.h"
#include "RVChallenge_CompleteGuestService.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API URVChallenge_CompleteGuestService : public URVChallengeCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredServiceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    URVChallenge_CompleteGuestService();

    UFUNCTION(BlueprintCallable)
    void TrackCompletedServices(FGameplayTag ServiceTag);
    
};

