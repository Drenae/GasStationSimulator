#include "Shark.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

AShark::AShark(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreysNumberToEat = 0;
    this->EatenCustomersNumber = 0;
    this->MinPreysNumber = 1;
    this->MaxPreysNumber = 3;
    this->CurrentSecondsToFindNextPrey = 45.00f;
    this->SecondsToFindNextPrey = 45.00f;
    this->bIgnoreCustomers = false;
    this->AcceptableDistance = 1000.00f;
    this->SharkMarkerArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("SharkMarkerArrow"));
    this->SharkMarkerClass = NULL;
    this->SharkMarker = NULL;
    this->HealthBarClass = NULL;
    this->HealthBar = NULL;
    this->NotificationClass = NULL;
    this->Notification = NULL;
    this->bAttacking = false;
    this->CheckMarkerTime = 1.00f;
    this->bChecking = false;
    this->SharkMarkerArrow->SetupAttachment(SkeletalMesh);
}

void AShark::UpdateSharkMarker() {
}

void AShark::StartLookingForAPrey() {
}


void AShark::RandomAttackValues() {
}

void AShark::OnSharkOutAnimFinished() {
}

void AShark::OnCustomerEaten(AShark* Shark, AWaterVehicle* EatenCustomer) {
}

void AShark::ManageWigdetsPostEvent() {
}

bool AShark::IsSharkSeenByPlayer() {
    return false;
}

void AShark::CreateSharkMarker() {
}

void AShark::CreateNotification() {
}

void AShark::CreateHealthBar() {
}



