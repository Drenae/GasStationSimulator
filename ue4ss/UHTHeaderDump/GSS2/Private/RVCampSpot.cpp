#include "RVCampSpot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

ARVCampSpot::ARVCampSpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("RootArrow"));
    this->CampSpotRoot = (UArrowComponent*)RootComponent;
    this->CampSpotMapLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("CampSpotMapLocation"));
    this->CurrentMaxScheduledGuests = 1;
    this->bIsUnlocked = false;
    this->SpawnedNpcHome = NULL;
    this->Camper = NULL;
    this->SpawnDelay = 3.00f;
    this->bHasCustomName = false;
    this->CampSpotMapLocation->SetupAttachment(RootComponent);
}

void ARVCampSpot::UpdateCustomName(const FString& CustomName) {
}

void ARVCampSpot::UnlockCampSpot(bool IsSpotUnlocked) {
}

void ARVCampSpot::TrySpawnCustomerForServiceFromQueue() {
}

void ARVCampSpot::TrySpawnCustomerForService(FGameplayTag ServiceTag, EInteractableTaskType MainTask) {
}

void ARVCampSpot::TrySpawnCustomerForConcert() {
}

void ARVCampSpot::SpawnCustomerForRecentlyUnlockedService(const FGameplayTag& UnlockedService) {
}

void ARVCampSpot::SetMaxScheduledGuest(int32 NewMax) {
}


void ARVCampSpot::OnNpcSpawned(AAICharacterBase* SpawnedNpc) {
}

bool ARVCampSpot::IsNextInQueue(URVCustomerData* CustomerData) const {
    return false;
}

bool ARVCampSpot::IsCamperParked() const {
    return false;
}

bool ARVCampSpot::IsBooked() const {
    return false;
}

void ARVCampSpot::HandleCamperSpawned(URVCamperComponent* SpawnedCamper) {
}

void ARVCampSpot::HandleCamperLoaded(URVCamperComponent* LoadedCamper) {
}

void ARVCampSpot::HandleCamperLeft() {
}

void ARVCampSpot::HandleCamperArrived() {
}

TArray<AAICharacterBase*> ARVCampSpot::GetSpawnedCustomerNpcsForService(FGameplayTag ServiceTag) {
    return TArray<AAICharacterBase*>();
}

void ARVCampSpot::GetCustomName(bool& HasCustomerName, FString& CustomName) {
}

URVCustomerData* ARVCampSpot::GetCustomerData() const {
    return NULL;
}

TArray<AAICharacterBase*> ARVCampSpot::GetAllSpawnedCustomerNpcs(bool bIncludeGoingHome) {
    return TArray<AAICharacterBase*>();
}

URVCustomerData* ARVCampSpot::FindBookedCustomerByID(FGuid CustomerID) {
    return NULL;
}


