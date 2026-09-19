#include "ExhibitionSpotSlot.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent

AExhibitionSpotSlot::AExhibitionSpotSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExhibitionCamera = CreateDefaultSubobject<UChildActorComponent>(TEXT("Exhibition Camera"));
    this->ExhibitionCamera->SetupAttachment(RootComponent);
}

void AExhibitionSpotSlot::DEBUG_PutCarOnSale() {
}


