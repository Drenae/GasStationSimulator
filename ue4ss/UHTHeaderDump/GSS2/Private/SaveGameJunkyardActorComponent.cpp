#include "SaveGameJunkyardActorComponent.h"

USaveGameJunkyardActorComponent::USaveGameJunkyardActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USaveGameJunkyardActorComponent::SpawnCarWreckFromSavedData(FSavedCarWreck SavedData) {
}

void USaveGameJunkyardActorComponent::SaveWrenchComboRecord() {
}

void USaveGameJunkyardActorComponent::SaveWreckAreas() {
}

void USaveGameJunkyardActorComponent::SaveSean() {
}

void USaveGameJunkyardActorComponent::SaveSaleSlots(TArray<FSavedSaleSlot>& SavedSaleSlots) {
}

void USaveGameJunkyardActorComponent::SaveJunkyardStorage() {
}

void USaveGameJunkyardActorComponent::SaveJunkyardManager() {
}

void USaveGameJunkyardActorComponent::SaveFameManager() {
}

void USaveGameJunkyardActorComponent::SaveCrane() {
}

void USaveGameJunkyardActorComponent::SaveContractsStates(TArray<FSavedState>& SavedStatesData, const TArray<FUnlockedState>& UnlockedStates) {
}

void USaveGameJunkyardActorComponent::SaveContractsManager() {
}

void USaveGameJunkyardActorComponent::SaveContractSlots(TArray<FSavedContractSlot>& SavedContractSlots, const TArray<FContractSlot>& ContractSlots) {
}

void USaveGameJunkyardActorComponent::SaveContracts(TArray<UContractBase*> Contracts, FSavedState& SavedState) {
}

void USaveGameJunkyardActorComponent::SaveChemicalBaths() {
}

void USaveGameJunkyardActorComponent::SaveCarWrecks() {
}

void USaveGameJunkyardActorComponent::SaveCarParts(AJunkyardCarWreck* CarWreck, FSavedCarWreck& SavedCarWreckData) {
}

void USaveGameJunkyardActorComponent::SaveBuildings() {
}

void USaveGameJunkyardActorComponent::SaveAuctionsManager() {
}

void USaveGameJunkyardActorComponent::OnCarWreckPartLoaded(AJunkyardCarWreck* LoadedWreck, FSavedCarWreck WreckData) {
}

void USaveGameJunkyardActorComponent::OnCarWreckFullyLoaded(AJunkyardCarWreck* LoadedWreck, FSavedCarWreck WreckData) {
}

void USaveGameJunkyardActorComponent::LoadWrenchComboRecord() {
}

void USaveGameJunkyardActorComponent::LoadWreckAreas() {
}

void USaveGameJunkyardActorComponent::LoadSean() {
}

void USaveGameJunkyardActorComponent::LoadSaleSlots(const TArray<FSavedSaleSlot>& SavedSaleSlots) {
}

void USaveGameJunkyardActorComponent::LoadJunkyardStorage() {
}

void USaveGameJunkyardActorComponent::LoadJunkyardManager() {
}

void USaveGameJunkyardActorComponent::LoadFameManager() {
}

void USaveGameJunkyardActorComponent::LoadCrane() {
}

void USaveGameJunkyardActorComponent::LoadContractsStates(TArray<FUnlockedState>& UnlockedStates, const TArray<FSavedState>& SavedStatesData) {
}

void USaveGameJunkyardActorComponent::LoadContractsManager() {
}

void USaveGameJunkyardActorComponent::LoadContractSlots(TArray<FContractSlot>& ContractSlots, const TArray<FSavedContractSlot>& SavedContractSlots) {
}

void USaveGameJunkyardActorComponent::LoadContracts(const FSavedState& SavedState) {
}

void USaveGameJunkyardActorComponent::LoadChemicalBaths() {
}

void USaveGameJunkyardActorComponent::LoadCarWrecks() {
}

void USaveGameJunkyardActorComponent::LoadCarParts(AJunkyardCarWreck* CarWreck, const FSavedCarWreck& SavedCarWreckData) {
}

void USaveGameJunkyardActorComponent::LoadBuildings() {
}

void USaveGameJunkyardActorComponent::LoadAuctionsManager() {
}

FSavedCarWreck USaveGameJunkyardActorComponent::GetSavedCarWreck(AJunkyardCarWreck* CarWreck) {
    return FSavedCarWreck{};
}


