#include "QuestChallengeManager.h"

AQuestChallengeManager::AQuestChallengeManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RVObjective = NULL;
    this->ActiveQuestData = NULL;
    this->ActiveObjectiveData = NULL;
    this->TimeUntilChallenge = 0.00f;
    this->TimeUntilChallengeCompletitionCheck = 0.00f;
}

void AQuestChallengeManager::VerifyIfChallengeStillSame() {
}

void AQuestChallengeManager::VerifyChallengeComplete() {
}

void AQuestChallengeManager::StatUpdated(EGSS_Stat NewStatUpdated, int32 ValueUpdated) {
}

void AQuestChallengeManager::StartRVChallenge(URVChallenge* ObjectiveRef) {
}

void AQuestChallengeManager::StartPostGameChallenge(FQuestChallenge ChallengeToStart) {
}

void AQuestChallengeManager::StartObjectiveChallenges(UChallengeObjective* ObjectiveRef) {
}

void AQuestChallengeManager::StartChallenge(UGSSQuest* QuestRef) {
}

void AQuestChallengeManager::RVChallengeUpdated(URVChallenge* QuestRef, URVChallengeCondition* Condition) {
}

void AQuestChallengeManager::ResetTimeUntilChallenge() {
}

void AQuestChallengeManager::OnQuestsLoadingStartLoadingChallenges() {
}

void AQuestChallengeManager::OnGSSPlayerSpawned(AGSSPlayerCharacter* CharRef) {
}

void AQuestChallengeManager::LoadActiveChallenges(TArray<FQuestChallenge> ChallengesToLoad, float LoadedTimeUntilChallenge, float LoadedTimeUntilChallengeComp, bool bIsTickEnabled) {
}

bool AQuestChallengeManager::IsRVChallengeComplete(URVChallenge* QuestRef) {
    return false;
}

bool AQuestChallengeManager::IsRVChallengeActive() {
    return false;
}

bool AQuestChallengeManager::IsObjectiveChallengeComplete(UChallengeObjective* QuestRef) {
    return false;
}

bool AQuestChallengeManager::IsChallengeComplete(UGSSQuest* QuestRef) {
    return false;
}

bool AQuestChallengeManager::IsChallengeActive() {
    return false;
}

bool AQuestChallengeManager::IsActiveChallengeComplete() {
    return false;
}

void AQuestChallengeManager::GetValuesOfChallengePart(TArray<FQuestChallenge>& ChallengeToCheck, EGSS_Stat StatToCheck, float& ActiveAmount, float& NeededAmount) {
}

float AQuestChallengeManager::GetTimeUntilChallengeCompletitionCheck() {
    return 0.0f;
}

float AQuestChallengeManager::GetTimeUntilChallenge() {
    return 0.0f;
}

int32 AQuestChallengeManager::GetChallengeValue(EGSS_Stat StatToCheck) {
    return 0;
}

TArray<FQuestChallenge> AQuestChallengeManager::GetActiveChallenges() {
    return TArray<FQuestChallenge>();
}

void AQuestChallengeManager::FinishRVChallenge(URVChallenge* ObjectiveRef, bool bSuccess) {
}

void AQuestChallengeManager::FinishPostGameChallenge(bool bSuccess) {
}

void AQuestChallengeManager::FinishChallenge() {
}

int32 AQuestChallengeManager::FindActiveChallengeIndex(EGSS_Stat StatToCheck) {
    return 0;
}

void AQuestChallengeManager::Debug_AddChallengeProgress(int32 Amount) {
}

void AQuestChallengeManager::ActivatePostGameChallenges() {
}


