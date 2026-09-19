#include "SeanEngineFixingStation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ASeanEngineFixingStation::ASeanEngineFixingStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Hammer = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hammer"));
    this->ScrewDriver = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScrewDriver"));
    this->Wrench = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wrench"));
    this->Hammer->SetupAttachment(RootComponent);
    this->ScrewDriver->SetupAttachment(RootComponent);
    this->Wrench->SetupAttachment(RootComponent);
}


