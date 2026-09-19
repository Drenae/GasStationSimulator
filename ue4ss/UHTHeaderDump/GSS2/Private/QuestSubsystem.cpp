#include "QuestSubsystem.h"

UQuestSubsystem::UQuestSubsystem() {
    this->bIsSystemInitialized = false;
    this->bIsMainQuestLineCompleted = false;
    this->bDoingOnlyRetroactiveQuestLines = false;
    this->WorldPtr = NULL;
    this->QuestlinesToLoadAmount = 0;
}

bool UQuestSubsystem::TryToSetCurrentQuestLine() {
    return false;
}

void UQuestSubsystem::TryStartRetroactiveQuestLine(UQuestLineBase* QuestLineBase) {
}

void UQuestSubsystem::TranslateQuestLineAfterFinished(UQuestLineBase* QuestLine, bool bRunStartQuestLineAction) {
}

void UQuestSubsystem::SetAmountOfLoadedQuestlines(int32 InQuestlinesToLoad) {
}

void UQuestSubsystem::OnWorldBeginPlay() {
}

void UQuestSubsystem::OnQuestStartedInternal(UQuestBase* QuestStarted) {
}

void UQuestSubsystem::OnQuestsLoadedFromSave(TArray<FSoftObjectPath> NewSaveSystemQuestLinesToLoad) {
}

void UQuestSubsystem::OnQuestFinishedInternal(UQuestBase* QuestFinished) {
}

void UQuestSubsystem::OnObjectiveStartedInternal(UObjectiveBase* ObjectiveStarted) {
}

void UQuestSubsystem::OnObjectiveFinishedInternal(UObjectiveBase* ObjectiveFinished) {
}

void UQuestSubsystem::OnGameLoadingStarted() {
}

bool UQuestSubsystem::IsQuestlineStarted(const EDLCName DlcQuestline) {
    return false;
}

bool UQuestSubsystem::IsQuestlineFinished(const EDLCName DlcQuestline) {
    return false;
}

bool UQuestSubsystem::IsQuestCurrentlyFollowed(UQuestBase* Quest) {
    return false;
}

bool UQuestSubsystem::IsObjectiveFollowedInAnyQuestline(UObjectiveBase* Objective) {
    return false;
}

bool UQuestSubsystem::IsObjectiveCurrentlyFollowed(UObjectiveBase* Objective) {
    return false;
}

bool UQuestSubsystem::HasQuestBeenCompletedNoHistory(UQuestBase* QuestToCheck) {
    return false;
}

bool UQuestSubsystem::HasQuestBeenCompleted(UQuestBase* QuestToCheck) {
    return false;
}

bool UQuestSubsystem::HasObjectiveBeenCompleted(TSoftClassPtr<UObjectiveBase> ObjectiveToCheck) {
    return false;
}

bool UQuestSubsystem::HasMainQuestBeenCompletedInThePast(UQuestBase* QuestToCheck) {
    return false;
}

void UQuestSubsystem::HandleDLCsQuestLinesForFinishedGame(bool bQuestlineFinished) {
}

UActiveQuestLine* UQuestSubsystem::GetFollowedQuestLine() {
    return NULL;
}

UQuestBase* UQuestSubsystem::GetFollowedQuest() {
    return NULL;
}

UObjectiveBase* UQuestSubsystem::GetActiveObjective(UQuestBase* Quest) {
    return NULL;
}

bool UQuestSubsystem::FollowQuestLine(const EDLCName DlcQuestline) {
    return false;
}

void UQuestSubsystem::FollowObjectiveQuestline(UObjectiveBase* Objective) {
}

bool UQuestSubsystem::FollowNextQuestLine() {
    return false;
}

void UQuestSubsystem::FollowActiveQuestLine(UQuestLineBase* QuestLineToFollow) {
}

void UQuestSubsystem::Debug_SkipQuest() {
}


