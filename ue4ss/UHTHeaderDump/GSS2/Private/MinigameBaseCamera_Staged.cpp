#include "MinigameBaseCamera_Staged.h"

AMinigameBaseCamera_Staged::AMinigameBaseCamera_Staged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameplayStageIndex = 0;
    this->ComponentSelected = NULL;
}

void AMinigameBaseCamera_Staged::SetStage(int32 NewStageIndex) {
}

void AMinigameBaseCamera_Staged::SetSelectedComponent(UPrimitiveComponent* Component) {
}

void AMinigameBaseCamera_Staged::SetPartVisibility(UPrimitiveComponent* ComponentRef, bool bNewVisibility) {
}

void AMinigameBaseCamera_Staged::PartAnimationFinished(UPrimitiveComponent* ComponentAnimated) {
}

bool AMinigameBaseCamera_Staged::IsValidForStage(UPrimitiveComponent* ComponentToCheck) {
    return false;
}

void AMinigameBaseCamera_Staged::HandleStageComponent(UPrimitiveComponent* ComponentHit) {
}

int32 AMinigameBaseCamera_Staged::GetPartIndexOfCurrentStage(UPrimitiveComponent* ComponentRef, int32& StageIndex) {
    return 0;
}

int32 AMinigameBaseCamera_Staged::GetMinigameStage() {
    return 0;
}

bool AMinigameBaseCamera_Staged::AreAllPartsOfActiveStageComplete() {
    return false;
}

void AMinigameBaseCamera_Staged::AdvanceToNextStage() {
}


