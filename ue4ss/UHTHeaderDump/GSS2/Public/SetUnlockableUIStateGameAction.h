#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EUnlockableUIState.h"
#include "GameAction.h"
#include "SetUnlockableUIStateGameAction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API USetUnlockableUIStateGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUnlockableUIState State;
    
    USetUnlockableUIStateGameAction();

};

