#include "RvGuestServiceSpot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

ARvGuestServiceSpot::ARvGuestServiceSpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExtraPrimarySkeletalMesh = NULL;
    this->ExtraSecondarySkeletalMesh = NULL;
    this->ExtraStaticMesh = NULL;
    this->ExtraGuestPositioningArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ExtraGuestPositioningArrow"));
    this->bCheckClientReadyWithMinigameInWorld = false;
    this->RvMinigameInWorld = NULL;
    this->MinigameWidget = NULL;
    this->ExtraGuestPositioningArrow->SetupAttachment(RootComponent);
}

void ARvGuestServiceSpot::UpdateGuestWaitsForServiceOnCustomerArrived(AAICharacterBase* Customer, AActor* TargetActor) {
}

void ARvGuestServiceSpot::UpdateGuestWaitsForService() {
}

bool ARvGuestServiceSpot::IsClientReady() {
    return false;
}


UArrowComponent* ARvGuestServiceSpot::GetExtraGuestPositioningArrow() const {
    return NULL;
}

UPrimitiveComponent* ARvGuestServiceSpot::GetComponentToAttachToGuest_Implementation() {
    return NULL;
}

AActor* ARvGuestServiceSpot::GetActorForAnimating_Implementation() {
    return NULL;
}


