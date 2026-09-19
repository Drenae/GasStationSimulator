#include "RvMinigameInWorld_Sauna.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ARvMinigameInWorld_Sauna::ARvMinigameInWorld_Sauna(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Track = NULL;
    this->PlayerDot = NULL;
    this->PlayerDotClass = NULL;
    this->TargetDotClass = NULL;
    this->ObstacleDotClass = NULL;
    this->TrackClass = NULL;
    this->TrackSlot = CreateDefaultSubobject<USceneComponent>(TEXT("Track Slot"));
    this->SaunaSettings = NULL;
    this->TargetsToCollect = 0;
    this->CollectedTargets = 0;
    this->AllowedMistakes = 0;
    this->Mistakes = 0;
    this->bMistakeMode = false;
    this->TrackSlot->SetupAttachment(RootComponent);
}

void ARvMinigameInWorld_Sauna::SetMistakeMode(bool bNewEnabled) {
}

void ARvMinigameInWorld_Sauna::OnCollectedDot_Implementation(ASaunaCollectibleDot* CollectedDot) {
}

bool ARvMinigameInWorld_Sauna::IsMistakeMode() const {
    return false;
}

ASaunaPlayerDot* ARvMinigameInWorld_Sauna::GetPlayerDot() const {
    return NULL;
}

float ARvMinigameInWorld_Sauna::GetMistakeModeProgress() const {
    return 0.0f;
}

TArray<ASaunaCollectibleDot*> ARvMinigameInWorld_Sauna::GetCollectibleDots() {
    return TArray<ASaunaCollectibleDot*>();
}

void ARvMinigameInWorld_Sauna::DelayedSpawn() {
}

bool ARvMinigameInWorld_Sauna::CanSpawnCollectibleDots_Implementation() const {
    return false;
}


