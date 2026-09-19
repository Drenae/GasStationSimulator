#include "Product.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent

AProduct::AProduct(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThrowSound = CreateDefaultSubobject<UAudioComponent>(TEXT("ThrowSound"));
    this->PickUpSound = CreateDefaultSubobject<UAudioComponent>(TEXT("PickUpSound"));
    this->ImpactSound = CreateDefaultSubobject<UAudioComponent>(TEXT("ImpactSound"));
    this->bIsPickable = true;
    this->bAllowInteraction = true;
    this->bTmpPawn = NULL;
    this->ThrowMultiplier = 1.00f;
    this->CashShopHoldZOffset = 0.00f;
    this->CashShopScale = 1.00f;
    this->ImpactSound->SetupAttachment(RootComponent);
    this->PickUpSound->SetupAttachment(RootComponent);
    this->ThrowSound->SetupAttachment(RootComponent);
}

void AProduct::StartTimerToDeactivatePhysics(float Seconds) {
}

void AProduct::StartTimerToActivateCollision(float Seconds) {
}

void AProduct::SetThrowStatus(bool Active) {
}

void AProduct::SetNonPlayerThrowStatus(bool Active) {
}

void AProduct::SetIsScanned(bool bNewValue) {
}

void AProduct::SetAllowInteraction(bool bAllow) {
}

void AProduct::PickUpProductInternal() {
}

void AProduct::PickUpProduct(APawn* Pawn) {
}

void AProduct::HandleLanding() {
}

bool AProduct::GetProductLanded() {
    return false;
}

bool AProduct::GetIsScanned() {
    return false;
}

FName AProduct::GetInteractionName_Implementation() {
    return NAME_None;
}

FName AProduct::GetInteractionName_Implementation() {
    return NAME_None;
}

float AProduct::GetCashShopScale() {
    return 0.0f;
}

float AProduct::GetCashShopHoldZOffset() {
    return 0.0f;
}

TArray<AProduct*> AProduct::GetAllThingsAroundObjects() {
    return TArray<AProduct*>();
}

bool AProduct::GetAllowInteraction() {
    return false;
}

void AProduct::DestroySelfYolo() {
}

void AProduct::DeactivatePhysicsOnTimer() {
}

void AProduct::DeactivateCollisionOnObjectForFewSeconds(float Seconds) {
}

void AProduct::BeginOverlapOnTrash(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AProduct::ActivatePhysicsOnObjectForFewSeconds(float Seconds) {
}

void AProduct::ActivateCollisionOnTimer() {
}


