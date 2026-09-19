#include "ObjectiveMarker.h"

AObjectiveMarker::AObjectiveMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MarkerWidget = NULL;
    this->Outline = 500.00f;
    this->Marker = 1000.00f;
    this->ActorMarked = NULL;
    this->DelayActivated = 0.00f;
    this->MarkerIconWidget = NULL;
}



void AObjectiveMarker::ShowHideMarker(bool bShow) {
}

void AObjectiveMarker::SetMarkerState(bool bEnabled) {
}

void AObjectiveMarker::EnableMarker() {
}

void AObjectiveMarker::DisableMarker() {
}

void AObjectiveMarker::DestroyMarker(AActor* Actor) {
}


