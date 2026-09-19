#include "ClearRuinsObjective.h"

UClearRuinsObjective::UClearRuinsObjective() {
    this->bCreateObjectiveMarkerOnEachRuin = true;
}

void UClearRuinsObjective::OnRuinsRemoved(ARuins* Ruins) {
}

void UClearRuinsObjective::OnRuinLoaded(int32 RuinIndex) {
}

void UClearRuinsObjective::OnMarkerSpawned(AObjectiveMarker* ObjectiveMarker) {
}


