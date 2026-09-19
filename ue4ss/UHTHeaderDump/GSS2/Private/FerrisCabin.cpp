#include "FerrisCabin.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AFerrisCabin::AFerrisCabin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshCompoent"));
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    this->Camera = NULL;
    this->BaseTurnRate = 0.00f;
    this->BaseLookUpRate = 0.00f;
    this->TurnRate = 2.00f;
    this->bIsInUse = false;
    this->AudioComponent->SetupAttachment(RootComponent);
}

void AFerrisCabin::UseFerrisCabin() {
}



