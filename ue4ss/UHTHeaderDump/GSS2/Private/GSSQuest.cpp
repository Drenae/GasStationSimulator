#include "GSSQuest.h"

UGSSQuest::UGSSQuest() {
    this->OwnerPawn = NULL;
    this->ObjectiveMarkerClass = NULL;
    this->PartOfQuestLineInNewSystem = NULL;
    this->EquivalentQuestInNewSystem = NULL;
    this->AllowSaveGameDuringQuest = true;
    this->QuestShowType = EQuestShowType::ProgressBar;
    this->TeleportPlayerOnSavePosition = false;
    this->CurrentProgress = 0;
    this->MaxProgress = 1;
    this->QuestTitle = FText::FromString(TEXT("RandomTitle"));
    this->MailClass = NULL;
    this->bQuestHasChallenge = false;
}

bool UGSSQuest::UpdateQuestStatus(int32 NewCurrentNumber) {
    return false;
}

void UGSSQuest::UpdateQuest_Implementation(APawn* Pawn) {
}


void UGSSQuest::SetTickEnabled(bool Enable) {
}

float UGSSQuest::QuestProgress() {
    return 0.0f;
}

void UGSSQuest::LoadQuestStats_Implementation() {
}

bool UGSSQuest::IsChallengeCompleted(UGSSQuest* QuestRef) {
    return false;
}

void UGSSQuest::InitializeQuest_Implementation(APawn* Pawn) {
}

void UGSSQuest::FinishQuest_Implementation(const EQuestState QuestState) {
}

void UGSSQuest::DestroyMarker(AActor* Actor) {
}


