#include "SmokeMachine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent

ASmokeMachine::ASmokeMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->StaticMesh = (UStaticMeshComponent*)RootComponent;
    this->Smoke_ParticleComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("SmokeParticleComponent"));
    this->PassedTime = 0.00f;
    this->Smoke_ParticleComponent->SetupAttachment(RootComponent);
}

void ASmokeMachine::StopWorking() {
}


void ASmokeMachine::CheckIfDancingTime() {
}


