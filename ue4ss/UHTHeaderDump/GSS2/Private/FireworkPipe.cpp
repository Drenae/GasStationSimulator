#include "FireworkPipe.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AFireworkPipe::AFireworkPipe(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StaticMesh = (UStaticMeshComponent*)RootComponent;
    this->ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    this->PassedTime = 0.00f;
    this->ParticleSystemComponent->SetupAttachment(RootComponent);
}

void AFireworkPipe::StopWorking() {
}


void AFireworkPipe::OnStartParty() {
}

void AFireworkPipe::CheckIfDancingTime() {
}


