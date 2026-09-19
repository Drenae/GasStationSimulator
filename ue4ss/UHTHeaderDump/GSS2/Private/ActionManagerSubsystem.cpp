#include "ActionManagerSubsystem.h"

UActionManagerSubsystem::UActionManagerSubsystem() {
    this->bDelayActions = false;
}

bool UActionManagerSubsystem::TriggerSpecificNPCDialogue(UObject* GameActionInstigaor, TSoftObjectPtr<AGSSNPAICharacterBase> NPCRef, UDialogueGraph* DialogueGraph, int32 DialogueID, bool bForceToPlayOnPlayerAudioComponent) {
    return false;
}

bool UActionManagerSubsystem::TriggerRandomNPCDialogue(UObject* GameActionInstigaor, TSoftObjectPtr<AGSSNPAICharacterBase> NPCRef, ENPCConversationType ConversationType) {
    return false;
}

bool UActionManagerSubsystem::StartDialogue(UObject* GameActionInstigator, UDialogueGraph* DialogueOwnerRef, int32 DialogueID) {
    return false;
}

void UActionManagerSubsystem::SetUnlockableUIUnlocked(FGameplayTag UIPartGameplayTag, bool bUnLocked) {
}

void UActionManagerSubsystem::SetUnlockableUIPartState(FUnlockableUIState NewUnlockableUIState) {
}

void UActionManagerSubsystem::SetUnlockableUIPartsState(FGameplayTagContainer TagsContainer, EUnlockableUIState State) {
}

void UActionManagerSubsystem::SetUnlockableGameplayStuffState(FUnlockableGameplayStuffState NewUnlockableGameplayStuffState) {
}

void UActionManagerSubsystem::SetUnlockableGameplayStuffsState(FGameplayTagContainer TagsContainer, bool bUnLocked) {
}

bool UActionManagerSubsystem::IsUnlockableUIUnlocked(FGameplayTag UIPartGameplayTag) {
    return false;
}

bool UActionManagerSubsystem::IsGameplayStuffUnlocked(FGameplayTag GameplayStuffTag) {
    return false;
}

void UActionManagerSubsystem::HandleDialogActions(TArray<FGameActionStruct> Actions, UObject* GameActionInstigator) {
}

bool UActionManagerSubsystem::HandleDialogAction(FGameActionStruct ActiveAction, UObject* GameActionInstigator) {
    return false;
}

void UActionManagerSubsystem::HandleAction(UGameAction* GameAction, UObject* Instigator) {
}

void UActionManagerSubsystem::GetUnlockableUIState(FGameplayTag UIPartGameplayTag, EUnlockableUIState& UnlockableUIState) {
}

bool UActionManagerSubsystem::FireActiveQuestExternalEvent(UObject* GameActionInstigator) {
    return false;
}

bool UActionManagerSubsystem::FinishActiveQuest(UObject* GameActionInstigator, EDLCName RelatedGraphDLC) {
    return false;
}

bool UActionManagerSubsystem::EndConversation(UObject* GameActionInstigator) {
    return false;
}

void UActionManagerSubsystem::AddRedDotTagIfNotExists(FGameplayTag RedDotTag) {
}


