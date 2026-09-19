#include "JunkyardMultitoolStation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent

AJunkyardMultitoolStation::AJunkyardMultitoolStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Multitool = CreateDefaultSubobject<UChildActorComponent>(TEXT("Multitool"));
    this->Multitool->SetupAttachment(RootComponent);
}


