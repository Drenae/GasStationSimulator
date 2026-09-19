#include "JunkyardCarPartCustomizable.h"

UJunkyardCarPartCustomizable::UJunkyardCarPartCustomizable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGarage = false;
    this->BasePrice = 0.00f;
    this->bInsidePart = false;
    this->TooltipOffset = 80.00f;
    this->SpawnedCarPaintParticle = NULL;
}

bool UJunkyardCarPartCustomizable::ShowTooltip_Implementation(APawn* Pawn, FHitResult Hit) {
    return false;
}

void UJunkyardCarPartCustomizable::OnEndMouseOver(UPrimitiveComponent* TouchedComponent) {
}

void UJunkyardCarPartCustomizable::OnBeginMouseOver(UPrimitiveComponent* TouchedComponent) {
}


