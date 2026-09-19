#include "DialogueManager.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent

ADialogueManager::ADialogueManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrimarySpeaker_AC = CreateDefaultSubobject<UAudioComponent>(TEXT("PrimarySpeaker_AC"));
    this->Primary_ActiveDialogue = NULL;
    this->SecondarySpeaker_AC = CreateDefaultSubobject<UAudioComponent>(TEXT("SecondarySpeaker_AC"));
    this->Secondary_ActiveDialogue = NULL;
    this->bDialogueStarted = false;
}

void ADialogueManager::SkipCurrentLine() {
}

void ADialogueManager::RemotelyTriggerDialogue(UObject* ObjectTriggering, UDialogueGraph* DialogueGraph, int32 DialogueID, bool bOverrideAudioComponent) {
}

void ADialogueManager::PlayDialogue(UDialogueNode* curDialogue, UAudioComponent* OtherAudioComponent, bool bForceToPlayOnPlayerAudioComponent) {
}

void ADialogueManager::NotifyUIDialogueEnding(UDialogueNode* CurNode) {
}

void ADialogueManager::NotifyUIChoicesToBeMade(UDialogueNode* ParentNode) {
}

void ADialogueManager::NotifyChoiceMade(UDialogueNode* NodeSelected) {
}

bool ADialogueManager::IsDialoguePlaying(EDialogueSpeaker Speaker) {
    return false;
}

int32 ADialogueManager::GetTotalDialoguesInQueue() {
    return 0;
}

float ADialogueManager::GetStoryBarkBlockTimer() const {
    return 0.0f;
}

UDialogueGraph* ADialogueManager::GetGameplayDialogueGraph(UDialogueGraph* DialogueGraph) {
    return NULL;
}

UDialogueGraph* ADialogueManager::GetDialogueGraphForPilot(ENPCGender InGender, ENPCAccent InAccent) {
    return NULL;
}

float ADialogueManager::GetDialogueDuration(UDialogueNode* CurNode) {
    return 0.0f;
}

void ADialogueManager::EndOfLineActions(UDialogueNode* CurNode) {
}

void ADialogueManager::DialogueEnded(UDialogueNode* curDialogue) {
}

void ADialogueManager::ActuallyStartDialogue(UDialogueNode* curDialogue, UAudioComponent* OtherAudioComponent, AGSSNPAICharacterBase* AnimatedNPCTarget) {
}


