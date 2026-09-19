#include "CharacterController.h"

ACharacterController::ACharacterController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ACharacterController::StopInitiativeTask(const EAIState TaskState) {
}


void ACharacterController::InitiativeTask_Implementation() {
}

EAIState ACharacterController::GetAIState() {
    return EAIState::Wait;
}


