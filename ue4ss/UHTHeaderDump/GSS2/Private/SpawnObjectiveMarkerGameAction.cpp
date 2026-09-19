#include "SpawnObjectiveMarkerGameAction.h"

USpawnObjectiveMarkerGameAction::USpawnObjectiveMarkerGameAction() {
    this->bShouldPlayOnGameLoaded = true;
    this->Outline = 1000.00f;
    this->Marker = 1000.00f;
    this->DelayActivated = 0.00f;
    this->DestroyMarkerAfterObjectiveIsFinished = true;
    this->MarkerInstance = NULL;
    this->ParentObjective = NULL;
    this->QuestSubsystem = NULL;
}

void USpawnObjectiveMarkerGameAction::OnObjectiveFinished(UObjectiveBase* ObjectiveFinished) {
}

void USpawnObjectiveMarkerGameAction::OnNewQuestLineFollowed(UActiveQuestLine* FollowedQuestLine) {
}

AObjectiveMarker* USpawnObjectiveMarkerGameAction::GetMarkerInstance() const {
    return NULL;
}


