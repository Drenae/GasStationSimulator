#include "SaveGameAirstripActorComponent.h"

USaveGameAirstripActorComponent::USaveGameAirstripActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USaveGameAirstripActorComponent::SaveTradingPilot(ATradingAirplane* Plane, FSavedTradingPilot& SavedTradingPilot) {
}

void USaveGameAirstripActorComponent::SaveTowy(FSavedTowy& SavedTowy, FSavedJoePlane& SavedJoePlane) {
}

void USaveGameAirstripActorComponent::SaveSpawnedAirplanes(FSavedDLCTradingSystemManager& SavedDLCTradingSystemManager) {
}

void USaveGameAirstripActorComponent::SaveSequences(FSavedAirport& SavedAirport) {
}

void USaveGameAirstripActorComponent::SaveRunways(FSavedAirportScheduleManager& SavedAirportScheduleManager) {
}

void USaveGameAirstripActorComponent::SaveRandomDialoguesManager(FSavedRandomDialoguesManager& SavedRandomDialogues) {
}

void USaveGameAirstripActorComponent::SaveJoePlane(FSavedJoePlane& SavedJoePlane) {
}

void USaveGameAirstripActorComponent::SaveDLCTradingSystemManager(FSavedDLCTradingSystemManager& SavedDLCTradingSystemManager) {
}

void USaveGameAirstripActorComponent::SaveCrashSiteManager(FSavedCrashSiteManager& SavedCrashSite) {
}

void USaveGameAirstripActorComponent::SaveAirstrip() {
}

void USaveGameAirstripActorComponent::SaveAirportInventory(FSavedAirportInventory& SavedAirport) {
}

void USaveGameAirstripActorComponent::SaveAirport(FSavedAirport& SavedAirport) {
}

void USaveGameAirstripActorComponent::LoadTradingPilot(ATradingAirplane* Plane, const FSavedTradingPilot& SavedTradingPilot) {
}

void USaveGameAirstripActorComponent::LoadTowy(const FSavedTowy SavedTowy) {
}

void USaveGameAirstripActorComponent::LoadSequences(const FSavedAirport& SavedAirport) {
}

void USaveGameAirstripActorComponent::LoadRunways(const FSavedAirport& SavedAirportScheduleManager) {
}

void USaveGameAirstripActorComponent::LoadRandomDialoguesManager(const FSavedRandomDialoguesManager SavedRandomDialogues) {
}

void USaveGameAirstripActorComponent::LoadNeededItems(TArray<FGeneratedLootInfo> ItemsToCheck) {
}

void USaveGameAirstripActorComponent::LoadJoePlane(const FSavedJoePlane SavedJoePlane) {
}

void USaveGameAirstripActorComponent::LoadFixAirplanes() {
}

void USaveGameAirstripActorComponent::LoadDLCTradingSystemManager(const FSavedDLCTradingSystemManager& SavedDLCTradingSystemManager) {
}

void USaveGameAirstripActorComponent::LoadCrashSiteManager(const FSavedCrashSiteManager SavedCrashSiteManager) {
}

void USaveGameAirstripActorComponent::LoadAirstrip() {
}

void USaveGameAirstripActorComponent::LoadAirportInventory(const FSavedAirstrip& SavedAirstrip, int32 SaveGameVersion) {
}

void USaveGameAirstripActorComponent::LoadAirport(const FSavedAirport& SavedAirport, const FSavedDLCTradingSystemManager& SavedDLCTradingSystemManager) {
}

void USaveGameAirstripActorComponent::LoadAirplanes(const FSavedDLCTradingSystemManager& SavedDLCTradingSystemManager) {
}


