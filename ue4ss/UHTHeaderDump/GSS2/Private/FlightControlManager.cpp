#include "FlightControlManager.h"

AFlightControlManager::AFlightControlManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AFlightControlManager::StopPlane(ATradingAirplane* Airplane) {
}

void AFlightControlManager::SetCurrentTSSequenceActor(FSavedCurrentStripSequence SequenceActorToSet) {
}

void AFlightControlManager::SetCurrentSequenceLoadedFromSave(ERunway Runway, bool NewValue) {
}

void AFlightControlManager::SetCurrentMSSequenceActor(FSavedCurrentStripSequence SequenceActorToSet) {
}

void AFlightControlManager::ResetSequenceRemoveBinding(ATradingAirplane* Plane) {
}

int32 AFlightControlManager::RandomSequence(int32 NumbersOfElementsInArray) {
    return 0;
}

void AFlightControlManager::PauseSequence(ATradingAirplane* Airplane, bool bLoadedFromSave) {
}

void AFlightControlManager::OnPlaneTakeOff(ERunway Runway) {
}

void AFlightControlManager::OnPlaneSpawned(ERunway Runway) {
}

void AFlightControlManager::OnAirportSet(bool bLoadedFromSave) {
}

TArray<ALevelSequenceActor*> AFlightControlManager::GetThirdStrip_Sequences() {
    return TArray<ALevelSequenceActor*>();
}

TArray<ALevelSequenceActor*> AFlightControlManager::GetMiddleStrip_Sequences() {
    return TArray<ALevelSequenceActor*>();
}

FSavedCurrentStripSequence AFlightControlManager::GetCurrentTSSequenceActor() {
    return FSavedCurrentStripSequence{};
}

FSavedCurrentStripSequence AFlightControlManager::GetCurrentMSSequenceActor() {
    return FSavedCurrentStripSequence{};
}

void AFlightControlManager::CreateThirdStripSequences(bool bLoadedFromSave) {
}

void AFlightControlManager::CreateMSTSSequences(bool bLoadedFromSave) {
}

void AFlightControlManager::CreateMiddleStripSequences(bool bLoadedFromSave) {
}

void AFlightControlManager::BindOnSequenceFinished(ATradingAirplane* Plane) {
}


