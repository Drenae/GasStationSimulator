#include "PickableToolStation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent

APickableToolStation::APickableToolStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PickableTool = CreateDefaultSubobject<UChildActorComponent>(TEXT("PickableTool"));
    this->PickableTool->SetupAttachment(RootComponent);
}


