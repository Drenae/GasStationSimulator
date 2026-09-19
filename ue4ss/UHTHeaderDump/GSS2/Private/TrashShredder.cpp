#include "TrashShredder.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ATrashShredder::ATrashShredder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShredderMesh"));
    this->ShredderMesh = (UStaticMeshComponent*)RootComponent;
    this->TargetSpot = CreateDefaultSubobject<USceneComponent>(TEXT("TargetSpot"));
    this->PullTrashBoxArea = CreateDefaultSubobject<UBoxComponent>(TEXT("PullTrashBox"));
    this->DeleteTrashBoxArea = CreateDefaultSubobject<UBoxComponent>(TEXT("DeleteBox"));
    this->TrashClass = NULL;
    this->GravityScale = 0.60f;
    this->Acceleration = 3000.00f;
    this->DeleteTrashBoxArea->SetupAttachment(RootComponent);
    this->PullTrashBoxArea->SetupAttachment(RootComponent);
    this->TargetSpot->SetupAttachment(RootComponent);
}

void ATrashShredder::PullTrash() {
}

void ATrashShredder::OnDeleteBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void ATrashShredder::DestroyNotPulledTrash() {
}


