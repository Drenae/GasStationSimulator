#include "JunkyardCarPartBase.h"

UJunkyardCarPartBase::UJunkyardCarPartBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CarPartType = EJunkyardCarPartType::FRONTBUMPER;
    this->IsSidePart = false;
    this->bGhost = false;
    this->bInspectMode = false;
    this->WrecksSettings = NULL;
}

bool UJunkyardCarPartBase::SimpleInteraction_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent) {
    return false;
}

bool UJunkyardCarPartBase::DisplayInteractionInfo_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent, UStaticMeshComponent*& StaticMeshComponent) {
    return false;
}

void UJunkyardCarPartBase::DisableInteractionInfo_Implementation(APawn* Pawn) {
}

bool UJunkyardCarPartBase::CanBeInteractable_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent) {
    return false;
}


