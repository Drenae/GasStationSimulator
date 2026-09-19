#pragma once
#include "CoreMinimal.h"
#include "EDLCName.h"
#include "GameAction.h"
#include "StartNewQuestLineGameAction.generated.h"

class UQuestLineBase;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UStartNewQuestLineGameAction : public UGameAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestLineBase* QuestLineToStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLCName RequiredDlc;
    
    UStartNewQuestLineGameAction();

};

