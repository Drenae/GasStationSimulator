#include "GrinderStation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent

AGrinderStation::AGrinderStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Grinder = CreateDefaultSubobject<UChildActorComponent>(TEXT("Grinder"));
    this->Grinder->SetupAttachment(RootComponent);
}


