#include "GoToGuestService.h"

UGoToGuestService::UGoToGuestService() {
    this->AutocompletionUpdateInterval = 1.00f;
    this->Autocompleted = false;
    this->bMinigameCompleted = false;
}

void UGoToGuestService::UpdateAutocompletion() {
}

void UGoToGuestService::SetBindings() {
}

void UGoToGuestService::PlayGuestMontage(FGameplayTag GuestMontageTag, UAnimMontage*& OutPlayingMontage) {
}

void UGoToGuestService::PlayGuestHandsAnim(FGameplayTag GuestHandsAnimConfigTag) {
}

void UGoToGuestService::OnMinigameStarted(ARvMinigameInWorld* MinigameInWorld) {
}

void UGoToGuestService::OnMinigameCompleted(FGameplayTag MinigameTag, ARvGuestServiceSpot* CompletedServiceSpot, bool bSuccess) {
}

bool UGoToGuestService::IsPlayingMontage(FGameplayTag GuestMontageTag) const {
    return false;
}

bool UGoToGuestService::IsMinigameCompleted() const {
    return false;
}

bool UGoToGuestService::IsAutocompleted() const {
    return false;
}

TArray<UAnimMontage*> UGoToGuestService::GetPlayingGuestServiceMontages() const {
    return TArray<UAnimMontage*>();
}

void UGoToGuestService::FinishAutocompleteService_Implementation() {
}


bool UGoToGuestService::AreLocationRequirementsMet(ARvGuestServiceSpot* TargetBuilding, FGameplayTag TargetService) {
    return false;
}

bool UGoToGuestService::AdjustCharacterLook() {
    return false;
}

AInteractableActor* UGoToGuestService::AddAsCustomer(ECustomerType CustomerType, FGameplayTag TargetService) {
    return NULL;
}


