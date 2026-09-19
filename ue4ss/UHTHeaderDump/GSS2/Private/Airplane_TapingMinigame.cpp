#include "Airplane_TapingMinigame.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AAirplane_TapingMinigame::AAirplane_TapingMinigame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlaneState = EJoeAirplaneState::CRASHED;
    this->AmountOfBrokenPartsSpawned = 2;
    this->PossitionLight_Green = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PossitionLight_Green"));
    this->PossitionLight_Red = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PossitionLight_Red"));
    this->PossitionLight_Red_Beacon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PossitionLight_Red_Beacon"));
    this->PropellerComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PropellerComponent"));
    this->RootComp = NULL;
    this->bCanMagnetActivatePhysics = true;
    this->bCanActorBeAttracted = true;
    this->TowySnapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TowySnapBox"));
    this->MetalFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MetalFrame"));
    this->MetalFrame->SetupAttachment(RootComponent);
    this->PossitionLight_Green->SetupAttachment(RootComponent);
    this->PossitionLight_Red->SetupAttachment(RootComponent);
    this->PossitionLight_Red_Beacon->SetupAttachment(RootComponent);
    this->PropellerComponent->SetupAttachment(RootComponent);
    this->TowySnapBox->SetupAttachment(RootComponent);
}



void AAirplane_TapingMinigame::SpawnAirplanePart(const FPartStructForAsyncLoad& PartToSpawn) {
}

bool AAirplane_TapingMinigame::ShouldActorRotate_Implementation() {
    return false;
}


void AAirplane_TapingMinigame::SetPossitionLightVisibility(bool bVisible) {
}

void AAirplane_TapingMinigame::SetPlaneState(EJoeAirplaneState NewPlaneState) {
}


void AAirplane_TapingMinigame::PlayEventOnDeattached_Implementation() {
}

void AAirplane_TapingMinigame::OnOneOfTheHolesFixed_Implementation(UStaticMeshComponent* HoleMesh) {
}


void AAirplane_TapingMinigame::InitializePlanePartsAfterLoad(TArray<int32> LoadedPlanePartsSequance, TArray<FSavedBrokenPartTapes> SavedBrokenPartsTapes) {
}

void AAirplane_TapingMinigame::InitializeForFirstSpawn() {
}

UPrimitiveComponent* AAirplane_TapingMinigame::GetPrimitiveToApplyFore_Implementation() {
    return NULL;
}

EJoeAirplaneState AAirplane_TapingMinigame::GetPlaneState() const {
    return EJoeAirplaneState::CRASHED;
}

TArray<int32> AAirplane_TapingMinigame::GetPlanePartSequance() const {
    return TArray<int32>();
}

TArray<FPartStruct> AAirplane_TapingMinigame::GetPlaneParts() const {
    return TArray<FPartStruct>();
}

UPrimitiveComponent* AAirplane_TapingMinigame::GetAttractedPrimitive_Implementation() {
    return NULL;
}

void AAirplane_TapingMinigame::GenerateRandomPlaneParts() {
}

void AAirplane_TapingMinigame::GeneratePlanePartsFromSequance(TArray<int32> PartsSequance, TArray<FSavedBrokenPartTapes> SavedBrokenPartsTapes) {
}

bool AAirplane_TapingMinigame::CanMagnetActivatePhysics_Implementation() {
    return false;
}

bool AAirplane_TapingMinigame::CanActorGetAttracted_Implementation() {
    return false;
}

void AAirplane_TapingMinigame::CalculateRemainingHoles() {
}

bool AAirplane_TapingMinigame::AreAllBrokenPlanePartsCovered() {
    return false;
}


