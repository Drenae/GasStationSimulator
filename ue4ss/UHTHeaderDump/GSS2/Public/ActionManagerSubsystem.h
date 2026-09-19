#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EDLCName.h"
#include "ENPCConversationType.h"
#include "EUnlockableUIState.h"
#include "GameActionStruct.h"
#include "OnNewGameplayStuffUnlockStateChangedDelegate.h"
#include "OnNewUnlockableUIStateSetDelegate.h"
#include "QuestItemCollision.h"
#include "UnlockableGameplayStuffState.h"
#include "UnlockableUIState.h"
#include "ActionManagerSubsystem.generated.h"

class AGSSNPAICharacterBase;
class UDialogueGraph;
class UGameAction;
class UObject;

UCLASS(Blueprintable)
class GSS2_API UActionManagerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewUnlockableUIStateSet OnNewUnlockableUIStateSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewGameplayStuffUnlockStateChanged OnNewGameplayStuffUnlockStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockableUIState> UnlockableUIStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockableGameplayStuffState> UnlockableGameplayStuffStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestItemCollision> QuestItemsCollisions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelayActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameActionStruct> DelayedActions;
    
public:
    UActionManagerSubsystem();

protected:
    UFUNCTION(BlueprintCallable)
    bool TriggerSpecificNPCDialogue(UObject* GameActionInstigaor, TSoftObjectPtr<AGSSNPAICharacterBase> NPCRef, UDialogueGraph* DialogueGraph, int32 DialogueID, bool bForceToPlayOnPlayerAudioComponent);
    
    UFUNCTION(BlueprintCallable)
    bool TriggerRandomNPCDialogue(UObject* GameActionInstigaor, TSoftObjectPtr<AGSSNPAICharacterBase> NPCRef, ENPCConversationType ConversationType);
    
    UFUNCTION(BlueprintCallable)
    bool StartDialogue(UObject* GameActionInstigator, UDialogueGraph* DialogueOwnerRef, int32 DialogueID);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUnlockableUIUnlocked(FGameplayTag UIPartGameplayTag, bool bUnLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetUnlockableUIPartState(FUnlockableUIState NewUnlockableUIState);
    
    UFUNCTION(BlueprintCallable)
    void SetUnlockableUIPartsState(FGameplayTagContainer TagsContainer, EUnlockableUIState State);
    
    UFUNCTION(BlueprintCallable)
    void SetUnlockableGameplayStuffState(FUnlockableGameplayStuffState NewUnlockableGameplayStuffState);
    
    UFUNCTION(BlueprintCallable)
    void SetUnlockableGameplayStuffsState(FGameplayTagContainer TagsContainer, bool bUnLocked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockableUIUnlocked(FGameplayTag UIPartGameplayTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameplayStuffUnlocked(FGameplayTag GameplayStuffTag);
    
    UFUNCTION(BlueprintCallable)
    void HandleDialogActions(TArray<FGameActionStruct> Actions, UObject* GameActionInstigator);
    
    UFUNCTION(BlueprintCallable)
    bool HandleDialogAction(FGameActionStruct ActiveAction, UObject* GameActionInstigator);
    
    UFUNCTION(BlueprintCallable)
    void HandleAction(UGameAction* GameAction, UObject* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void GetUnlockableUIState(FGameplayTag UIPartGameplayTag, EUnlockableUIState& UnlockableUIState);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool FireActiveQuestExternalEvent(UObject* GameActionInstigator);
    
    UFUNCTION(BlueprintCallable)
    bool FinishActiveQuest(UObject* GameActionInstigator, EDLCName RelatedGraphDLC);
    
    UFUNCTION(BlueprintCallable)
    bool EndConversation(UObject* GameActionInstigator);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddRedDotTagIfNotExists(FGameplayTag RedDotTag);
    
};

