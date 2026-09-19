#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EUnlockableGameplayStuffState.h"
#include "GameAction.h"
#include "LockUnlockGameplayStufGameAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API ULockUnlockGameplayStufGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnlockableGameplayStuffState State;
    
    ULockUnlockGameplayStufGameAction();

};

