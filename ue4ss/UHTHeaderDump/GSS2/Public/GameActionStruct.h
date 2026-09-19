#pragma once
#include "CoreMinimal.h"
#include "EGameAction.h"
#include "ENPCConversationType.h"
#include "EQuestState.h"
#include "GameActionStruct.generated.h"

class AGSSNPAICharacterBase;
class UDialogueGraph;

USTRUCT(BlueprintType)
struct FGameActionStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameAction ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueGraph* DialogueTreeObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DialogueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AGSSNPAICharacterBase> TargetNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENPCConversationType ConversationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestState QuestStateToSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideNPCSoundSource;
    
    GSS2_API FGameActionStruct();
};

