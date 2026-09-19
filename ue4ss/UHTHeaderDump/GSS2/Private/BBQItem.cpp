#include "BBQItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ABBQItem::ABBQItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PerfectStateThreshold = 0.00f;
    this->bIsRated = false;
    this->MinigameInWorldBBQ = NULL;
    this->CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
    this->DesiredCookingTimeDeviance = 0.00f;
    this->DesiredCookingTime = 0.00f;
    this->MaxHeightDuringMovement = 30.00f;
    this->CheckCloseCookingTimeValue = 0.20f;
    this->BurningDelay = 1.00f;
    this->State = EBBQItemState::RAW;
    this->CollisionComponent->SetupAttachment(RootComponent);
}

void ABBQItem::SetSlot(UBBQSlotComponent* NewSlot) {
}

void ABBQItem::SetCookingProgress(float NewCookingProgress) {
}

void ABBQItem::MoveToSmoothly(FTransform Target, float Duration, bool bSkipScale) {
}

bool ABBQItem::IsMoving() const {
    return false;
}

float ABBQItem::GetStateProgressToPerfect() const {
    return 0.0f;
}

EBBQItemState ABBQItem::GetState() const {
    return EBBQItemState::RAW;
}

UBBQSlotComponent* ABBQItem::GetSlot() const {
    return NULL;
}

float ABBQItem::GetOnlyCurrentStateProgress() const {
    return 0.0f;
}

float ABBQItem::GetDesiredCookingTime() const {
    return 0.0f;
}

float ABBQItem::GetCookingRemainingTime() const {
    return 0.0f;
}

float ABBQItem::GetCookingProgress() const {
    return 0.0f;
}

void ABBQItem::EnableActorCollisionIfOnCookingSlot(ABBQItem* Item) {
}

void ABBQItem::AddCookingProgress(float DeltaCookingProgress) {
}


