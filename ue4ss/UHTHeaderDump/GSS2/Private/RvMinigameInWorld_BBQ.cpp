#include "RvMinigameInWorld_BBQ.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ARvMinigameInWorld_BBQ::ARvMinigameInWorld_BBQ(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BBQSettings = NULL;
    this->Mistakes = 0;
    this->AllowedMistakes = 0;
    this->PlacingCooldown = 0.00f;
    this->CookingSpeedOnGamepad = 1.00f;
    this->RawSlotsAreaComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Raw Slots Area Component"));
    this->CookingSlotsAreaComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Cooking Slots Area Component"));
    this->ReadySlotsAreaComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Ready Slots Area Component"));
    this->CookingSlotsAreaComponent->SetupAttachment(RootComponent);
    this->RawSlotsAreaComponent->SetupAttachment(RootComponent);
    this->ReadySlotsAreaComponent->SetupAttachment(RootComponent);
}

void ARvMinigameInWorld_BBQ::TryToMoveAnyItemToCookingSlot(UBBQSlotComponent* CookingSlot) {
}

void ARvMinigameInWorld_BBQ::OnSetBBQItemInside(UBBQSlotComponent* Slot, ABBQItem* Item) {
}

void ARvMinigameInWorld_BBQ::OnItemStateChanged(ABBQItem* Item, EBBQItemState State) {
}

bool ARvMinigameInWorld_BBQ::IsTutorialLock() const {
    return false;
}

int32 ARvMinigameInWorld_BBQ::GetMistakes() const {
    return 0;
}


