#include "AISpawnPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AAISpawnPoint::AAISpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinTime = 5.00f;
    this->MaxTime = 25.00f;
    this->ExitPoint = NULL;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    this->CharacterSpawn = CreateDefaultSubobject<UArrowComponent>(TEXT("CharacterSpawnPoint"));
    this->GS = NULL;
    this->WS = NULL;
    this->GI = NULL;
    this->TimeToSpawn = 0.00f;
    this->LastVehicleSpawned = NULL;
    this->TrafficManager = NULL;
}

void AAISpawnPoint::OnTrafficImpactUpdated(int32 UpdatedImpact) {
}

void AAISpawnPoint::InitTrafficImpact(bool GameLoaded) {
}


