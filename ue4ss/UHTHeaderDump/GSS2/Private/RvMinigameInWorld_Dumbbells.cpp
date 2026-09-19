#include "RvMinigameInWorld_Dumbbells.h"

ARvMinigameInWorld_Dumbbells::ARvMinigameInWorld_Dumbbells(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetTotalWeight = 0.00f;
    this->TimeLimit = -1.00f;
    this->TimeLeft = -1.00f;
    this->bMoveMode = false;
    this->DumbbellsSettings = NULL;
}

void ARvMinigameInWorld_Dumbbells::SpawnDumbbell(const FDumbbellSetup& Setup) {
}

void ARvMinigameInWorld_Dumbbells::ResetDumbbells() {
}

void ARvMinigameInWorld_Dumbbells::OnDumbbellItemPlacedInContainer(ADumbbellItem* Item, ADumbbellsContainer* Container) {
}

FDumbbellsSolution ARvMinigameInWorld_Dumbbells::MergeSolutions(TArray<FDumbbellsSolution> Solutions) {
    return FDumbbellsSolution{};
}

int32 ARvMinigameInWorld_Dumbbells::GetTotalWeightForDifficulty(EGuestServiceDifficulty Diff, int32 SlotsAmount) {
    return 0;
}

float ARvMinigameInWorld_Dumbbells::GetTargetTotalWeight() const {
    return 0.0f;
}

void ARvMinigameInWorld_Dumbbells::GetSetupsForSolutions(TArray<FDumbbellSetup>& OutSetups, const TArray<FDumbbellsSolution>& Solutions) {
}

TArray<FDumbbellSetup> ARvMinigameInWorld_Dumbbells::GetSetups(bool bSort) const {
    return TArray<FDumbbellSetup>();
}

void ARvMinigameInWorld_Dumbbells::GenerateSolutions(float TargetWeight, const TArray<FDumbbellSetup>& Setups, TArray<FDumbbellsSolution>& OutSolutions, int32 MaxDumbbellsAmount) {
}

void ARvMinigameInWorld_Dumbbells::GenerateSimplestSolution(float TargetWeight, const TArray<FDumbbellSetup>& Setups, FDumbbellsSolution& OutSolution, int32 MaxDumbbellsAmount) {
}


