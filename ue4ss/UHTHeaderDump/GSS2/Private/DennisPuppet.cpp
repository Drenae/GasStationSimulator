#include "DennisPuppet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ADennisPuppet::ADennisPuppet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("NewRoot"));
    this->VacuumMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VacuumMesh"));
    this->PullTrashBoxArea = CreateDefaultSubobject<UBoxComponent>(TEXT("PullTrashBox"));
    this->DeleteTrashBoxArea = CreateDefaultSubobject<UBoxComponent>(TEXT("DeleteBox"));
    this->TargetSpot = CreateDefaultSubobject<USceneComponent>(TEXT("TargetSpot"));
    this->NewRoot = (USceneComponent*)RootComponent;
    this->VacuumCurrentSplineDistance = 0.00f;
    this->bVacuumActive = true;
    this->GravityScale = 0.60f;
    this->Acceleration = 3000.00f;
    this->DeleteTrashBoxArea->SetupAttachment(VacuumMesh);
    this->PullTrashBoxArea->SetupAttachment(VacuumMesh);
    this->TargetSpot->SetupAttachment(VacuumMesh);
    this->VacuumMesh->SetupAttachment(RootComponent);
}



void ADennisPuppet::StartCooldown(float CooldownOffset) {
}

void ADennisPuppet::PullTrash() {
}

void ADennisPuppet::OnDeleteBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ADennisPuppet::OnCooldownEnded() {
}

bool ADennisPuppet::IsOnCooldown() {
    return false;
}

void ADennisPuppet::DestroyNotPulledTrash() {
}


