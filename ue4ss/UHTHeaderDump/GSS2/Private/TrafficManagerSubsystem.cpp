#include "TrafficManagerSubsystem.h"

UTrafficManagerSubsystem::UTrafficManagerSubsystem() {
    this->CurrentTrafficEventID = 0;
    this->UpcomingTrafficEventID = 0;
}

void UTrafficManagerSubsystem::ValidateEvents() {
}

void UTrafficManagerSubsystem::UpdateCurrentTrafficImpact() {
}

void UTrafficManagerSubsystem::TryScheduleNextTrafficEvent() {
}

void UTrafficManagerSubsystem::StartSpecificEvent(FName RowName) {
}

void UTrafficManagerSubsystem::SetFuelSellPrice(EFuelMagazine FuelType, float NewPrice, bool BroadcastUpdate, UObject* ActionInstigator) {
}

void UTrafficManagerSubsystem::PopulateDefaultFuelSellPrices() {
}

void UTrafficManagerSubsystem::OnWorldBeginPlay() {
}

void UTrafficManagerSubsystem::OnNewGameplayStuffUnlockStateChanged(FUnlockableGameplayStuffState GameplayStuffUnlocked) {
}

void UTrafficManagerSubsystem::OnMovableDecorationRemoved(ADecorationBase* DecorationRemoved) {
}

void UTrafficManagerSubsystem::OnMovableDecorationPlaced(ADecorationBase* DecorationPlaced) {
}

void UTrafficManagerSubsystem::OnGameTimeUpdated(FTimeStruct UpdatedTime) {
}

void UTrafficManagerSubsystem::OnGameLoaded(bool GameLoaded) {
}

void UTrafficManagerSubsystem::InitTrafficEvents() {
}

FTimeStruct UTrafficManagerSubsystem::GetUpcomingEventTimeLeft() {
    return FTimeStruct{};
}

bool UTrafficManagerSubsystem::GetUpcomingEventData(FTrafficEventData& CurrentData) {
    return false;
}

float UTrafficManagerSubsystem::GetFuelSellPrice(EFuelMagazine FuelType) {
    return 0.0f;
}

int32 UTrafficManagerSubsystem::GetCurrentTotalTrafficImpact() {
    return 0;
}

int32 UTrafficManagerSubsystem::GetCurrentSeasonalDecorationImpact() {
    return 0;
}

int32 UTrafficManagerSubsystem::GetCurrentPopularityTrafficImpact() {
    return 0;
}

int32 UTrafficManagerSubsystem::GetCurrentLandmarkTrafficImpact() {
    return 0;
}

int32 UTrafficManagerSubsystem::GetCurrentHourTrafficImpact() {
    return 0;
}

int32 UTrafficManagerSubsystem::GetCurrentFuelPriceTrafficImpact() {
    return 0;
}

FTimeStruct UTrafficManagerSubsystem::GetCurrentEventTimeLeft() {
    return FTimeStruct{};
}

int32 UTrafficManagerSubsystem::GetCurrentEventImpact() {
    return 0;
}

bool UTrafficManagerSubsystem::GetCurrentEventData(FTrafficEventData& CurrentData) {
    return false;
}

void UTrafficManagerSubsystem::FinishCurrentEventEarly() {
}

void UTrafficManagerSubsystem::EndCurrentEvent() {
}

void UTrafficManagerSubsystem::BeginUpcommingEvent() {
}


