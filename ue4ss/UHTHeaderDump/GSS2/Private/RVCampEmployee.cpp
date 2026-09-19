#include "RVCampEmployee.h"

ARVCampEmployee::ARVCampEmployee(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EmployeeConfig = NULL;
    this->CurrentServiceSpot = NULL;
    this->bIsTalkingToPlayer = false;
    this->bShouldWalkAfterTalkingToPlayer = false;
    this->bIsAutopayEnabled = false;
    this->bIsUnpaid = false;
    this->bIsAtConcert = false;
    this->CurrentMoneyEarned = 0.00f;
    this->RVCampManager = NULL;
    this->GSSPlayerState = NULL;
    this->PlayerCharacter = NULL;
    this->bIsDLCDeactivated = false;
}

void ARVCampEmployee::UpdateServiceAssignment(FRVEmployeeAssignment Assignment, int32 SlotIndex) {
}

void ARVCampEmployee::TryToGoToNextService(bool ForceUpdate, bool KeepIndex, int32 IndexToKeep) {
}

bool ARVCampEmployee::TryPayEmployee() {
    return false;
}


void ARVCampEmployee::TalkToEmployee() {
}

void ARVCampEmployee::StopTalkingToEmployee() {
}

bool ARVCampEmployee::SimpleInteraction_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent) {
    return false;
}


void ARVCampEmployee::SetPayCooldown(FTimeStruct NewPayCooldown) {
}

void ARVCampEmployee::SetIsUnpaid(bool IsUnpaid) {
}

void ARVCampEmployee::SetIsAutopayEnabled(bool IsEnabled) {
}

void ARVCampEmployee::SetIsAtConcert(bool NewIsAtConcert) {
}

void ARVCampEmployee::SetCurrentMoneyEarned(float NewMoneyEarned) {
}

void ARVCampEmployee::ResetPayCooldown() {
}

void ARVCampEmployee::ResetCurrentService() {
}

void ARVCampEmployee::Reset() {
}

void ARVCampEmployee::OnTimeUpdated(const FTimeStruct UpdatedTime) {
}

void ARVCampEmployee::OnMinigameCompleted(FGameplayTag ServiceTag, ARvGuestServiceSpot* ServiceBuilding, bool Success) {
}

void ARVCampEmployee::OnDLCActivationStateChanged(EDLCName DLCName, bool bActivated) {
}

void ARVCampEmployee::OnConcertStopped(ERVCamperLeftReason CamperLeftReason) {
}

void ARVCampEmployee::OnConcertStarted() {
}

void ARVCampEmployee::LoadServiceAssignments(TArray<FRVEmployeeAssignment> LoadedAssignments, FGameplayTag LoadedCurrentServiceTarget) {
}

void ARVCampEmployee::InitAfterSpawn() {
}


void ARVCampEmployee::GoToService(FGameplayTag Service, ARvGuestServiceSpot* ServiceSpot, bool ForceUpdate) {
}

void ARVCampEmployee::GoToConcert() {
}

FTimeStruct ARVCampEmployee::GetPayCooldown() const {
    return FTimeStruct{};
}

bool ARVCampEmployee::GetIsUnpaid() const {
    return false;
}

bool ARVCampEmployee::GetIsTalkingToPlayer() const {
    return false;
}

bool ARVCampEmployee::GetIsAutopayEnabled() const {
    return false;
}

bool ARVCampEmployee::GetIsAtConcert() const {
    return false;
}

FGameplayTag ARVCampEmployee::GetCurrentServiceTarget() {
    return FGameplayTag{};
}

float ARVCampEmployee::GetCurrentMoneyEarned() const {
    return 0.0f;
}

TArray<FRVEmployeeAssignment> ARVCampEmployee::GetAssignedServices() {
    return TArray<FRVEmployeeAssignment>();
}

void ARVCampEmployee::FindNextValidService(int32 SearchStartIndex, FGameplayTag& Service, ARvGuestServiceSpot*& ServiceSpot) {
}

bool ARVCampEmployee::DisplayInteractionInfo_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent, UStaticMeshComponent*& StaticMeshComponent) {
    return false;
}

void ARVCampEmployee::DisableInteractionInfo_Implementation(APawn* Pawn) {
}

bool ARVCampEmployee::CanPayEmployee() {
    return false;
}

bool ARVCampEmployee::CanBeInteractable_Implementation(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent) {
    return false;
}


