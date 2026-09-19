#include "RVSpawner.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ARVSpawner::ARVSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnCollision"));
    this->VehicleSpawnLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("VehicleSpawnLocation"));
    this->CharacterSpawnLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("CharacterSpawnLocation"));
    this->ExitPoint = NULL;
    this->HomePoint = NULL;
    this->LoadingCamperData = NULL;
    this->SpawnAttemptInterval = 1.00f;
    this->MinSpawnCooldown = 8.00f;
    this->SpawnCooldownActive = false;
    this->LoadingCamperDismissed = false;
    this->IsSpawnCooldownActive = false;
    this->GameState = NULL;
    this->RVCampManager = NULL;
}

void ARVSpawner::TrySpawnCamper() {
}

void ARVSpawner::ScheduleCamperSpawn(URVCustomerData* CustomerData) {
}

void ARVSpawner::RegisterCamperAfterSpawn(URVCamperComponent* Camper, AAICharacterBase* Driver, bool& Success) {
}

void ARVSpawner::HandleCustomerDismissed(URVCustomerData* CustomerData) {
}

void ARVSpawner::EndSpawnCooldown() {
}


