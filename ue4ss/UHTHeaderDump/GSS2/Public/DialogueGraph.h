#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=GenericGraphRuntime -ObjectName=GenericGraph -FallbackName=GenericGraph
#include "DialogueList.h"
#include "EDLCName.h"
#include "ENPCConversationType.h"
#include "DialogueGraph.generated.h"

class UDialogueNode;

UCLASS(Blueprintable)
class GSS2_API UDialogueGraph : public UGenericGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLCName RelatedDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OriginalGraphPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NPCName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BG_Greeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BG_NPCText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BG_NPCRespondText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BG_PlayerText;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueList NPCConversationDialogueConnection[38];
    
    UDialogueGraph();

    UFUNCTION(BlueprintCallable)
    int32 GetRandomDialogueIDByType(ENPCConversationType InConversationType);
    
    UFUNCTION(BlueprintCallable)
    UDialogueNode* FindDialogueNodeByID(int32 UniqueNodeID);
    
    UFUNCTION(BlueprintCallable)
    UDialogueNode* FindDialogueNode(const FString& DialogueTag);
    
};

