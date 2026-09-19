#include "SDMinigameParticipantComponent.h"

USDMinigameParticipantComponent::USDMinigameParticipantComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

AActor* USDMinigameParticipantComponent::ReserveParticipantPos(AAICharacterBase* InParticipant, bool& bSuccess) {
    return NULL;
}

void USDMinigameParticipantComponent::PrepareParticipant(AAICharacterBase* InParticipant) {
}

TArray<AAICharacterBase*> USDMinigameParticipantComponent::GetParticipants() const {
    return TArray<AAICharacterBase*>();
}

TMap<AActor*, FSDMinigameParticipantPosition> USDMinigameParticipantComponent::GetParticipantPositions() const {
    return TMap<AActor*, FSDMinigameParticipantPosition>();
}

AActor* USDMinigameParticipantComponent::GetFreeParticipantPos() const {
    return NULL;
}

TSoftClassPtr<AGSSWheeledVehicle> USDMinigameParticipantComponent::GetDesiredVehicleForPosition(AActor* InPosition) const {
    return NULL;
}

int32 USDMinigameParticipantComponent::GetDesiredParticipantsNum() const {
    return 0;
}

void USDMinigameParticipantComponent::FreeParticipantPoses(bool bOrderToGoHome) {
}

AActor* USDMinigameParticipantComponent::FindParticipantPosition(AAICharacterBase* InParticipant) const {
    return NULL;
}

bool USDMinigameParticipantComponent::AreAllParticipantsReady() const {
    return false;
}


