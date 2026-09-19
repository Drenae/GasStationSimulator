#include "WaterVehicleSpawner.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent

AWaterVehicleSpawner::AWaterVehicleSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
    this->SpawnedActor = NULL;
    this->Home = NULL;
    this->bUseSpawnMontage = false;
    this->bUseDeSpawnMontage = false;
    this->SingleMoveTo = false;
    this->VariableTarget = NULL;
}




void AWaterVehicleSpawner::SetSpawnedActor(AWaterVehicle* NewSpawnedActor) {
}

AWaterVehicle* AWaterVehicleSpawner::GetSpawnedActor() {
    return NULL;
}

TArray<AActor*> AWaterVehicleSpawner::GetHomeTargetPoints() {
    return TArray<AActor*>();
}


