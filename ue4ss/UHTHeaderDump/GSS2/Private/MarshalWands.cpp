#include "MarshalWands.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AMarshalWands::AMarshalWands(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("RootSphere"));
    this->WandsDirection = 1;
    this->WandsWiggleSpeed = 200.00f;
    this->WandsPostition = 0.00f;
    this->WandsPostitionMax = 30.00f;
    this->WandsPostitionMin = -10.00f;
    this->RootSphere = (USphereComponent*)RootComponent;
    this->Wand1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wand1"));
    this->Wand2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wand2"));
    this->bShouldWiggle = true;
    this->Wand1->SetupAttachment(RootComponent);
    this->Wand2->SetupAttachment(RootComponent);
}

void AMarshalWands::WiggleWands(float DeltaTime) {
}

void AMarshalWands::SetShouldWiggle(bool _bShouldWiggle) {
}

void AMarshalWands::SetRotation(FRotator WandsRotation) {
}

void AMarshalWands::ResetRotation() {
}


