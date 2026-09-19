#include "SDFirePitMinigame.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InstancedStaticMeshComponent -FallbackName=InstancedStaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ASDFirePitMinigame::ASDFirePitMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlacedMeatInstancedStaticMesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("PlacedMeatInstancedMesh"));
    this->MeatBagPlaceAnchor = CreateDefaultSubobject<USceneComponent>(TEXT("MeatBagPlaceAnchor"));
    this->MeatBagPlaceTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("MeatBagPlaceTrigger"));
    this->MeatCookingTime = 10.00f;
    this->MeatBurnTime = 10.00f;
    this->PlacedMeatBag = NULL;
    this->MeatStatus = ESDFirePitMeatStatus::None;
    this->MeatBagPlaceAnchor->SetupAttachment(RootComponent);
    this->MeatBagPlaceTrigger->SetupAttachment(RootComponent);
    this->PlacedMeatInstancedStaticMesh->SetupAttachment(RootComponent);
}

void ASDFirePitMinigame::TryPlaceMeat() {
}

void ASDFirePitMinigame::RemoveMeat() {
}

void ASDFirePitMinigame::OnStaticMeshLoaded(TSoftObjectPtr<UStaticMesh> Mesh) {
}

void ASDFirePitMinigame::OnMeatTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ASDFirePitMinigame::OnMeatCooked_Implementation() {
}

void ASDFirePitMinigame::OnMeatBurned_Implementation() {
}

void ASDFirePitMinigame::OnMaterialLoaded(TSoftObjectPtr<UMaterialInterface> InMaterial) {
}

bool ASDFirePitMinigame::IsMeatPlaced() const {
    return false;
}

bool ASDFirePitMinigame::IsMeatBagPlaced() const {
    return false;
}

ASDMeatBagProduct* ASDFirePitMinigame::GetPlacedMeatBag() const {
    return NULL;
}

ESDFirePitMeatStatus ASDFirePitMinigame::GetMeatStatus() const {
    return ESDFirePitMeatStatus::None;
}


