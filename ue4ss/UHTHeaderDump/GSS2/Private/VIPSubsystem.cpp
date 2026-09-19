#include "VIPSubsystem.h"

UVIPSubsystem::UVIPSubsystem() {
    this->CurrentTime = 0.00f;
    this->CurrentVIP = NULL;
    this->bTimeHeldDuringLoading = false;
    this->CurrentVIPState = EVIPState::RESTING;
    this->CurrentDestination = EDLCName::NONE;
    this->bAllowedToTick = true;
}

void UVIPSubsystem::SetVIPMapPoints(const TArray<FVIPDestinationPoints> MapPointsToSet) {
}

void UVIPSubsystem::SetVIPCurrentTime(const float Value) {
}

void UVIPSubsystem::SetVIPCurrentState(const EVIPState NewState) {
}

void UVIPSubsystem::SetupAvaliableDestinations() {
}

void UVIPSubsystem::SetCurrentDestination(const EDLCName NewDestination) {
}

void UVIPSubsystem::OnGameplaySettingsApplied(bool bSuccess) {
}

void UVIPSubsystem::OnGameLoadingStarted() {
}

void UVIPSubsystem::OnGameLoadingFinished(bool bGameLoaded) {
}

bool UVIPSubsystem::IsVIPBonusActive(const EDLCName DestinationToCheck, float& OutRemaningTime) const {
    return false;
}

float UVIPSubsystem::GetVIPTravelingTime() const {
    return 0.0f;
}

float UVIPSubsystem::GetVIPRestingTime() const {
    return 0.0f;
}

TArray<FVIPDestinationPoints> UVIPSubsystem::GetVIPMapPoints() const {
    return TArray<FVIPDestinationPoints>();
}

FVIPDestinationPoints UVIPSubsystem::GetVIPDestinationMapPoints(EDLCName DLCName) const {
    return FVIPDestinationPoints{};
}

float UVIPSubsystem::GetVIPCurrentTime() const {
    return 0.0f;
}

EVIPState UVIPSubsystem::GetVIPCurrentState() const {
    return EVIPState::RESTING;
}

float UVIPSubsystem::GetVIPAwaitingTime() const {
    return 0.0f;
}

EDLCName UVIPSubsystem::GetCurrentMapDLC() const {
    return EDLCName::NONE;
}

EDLCName UVIPSubsystem::GetCurrentDestination() const {
    return EDLCName::NONE;
}

void UVIPSubsystem::AddVIPProgress(EDLCName VIPDestination) {
}


