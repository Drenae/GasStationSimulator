#include "CarWashGauge.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ACarWashGauge::ACarWashGauge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Needle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Needle"));
    this->Needle->SetupAttachment(RootComponent);
}



