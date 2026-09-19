#include "MinigolfHole.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AMinigolfHole::AMinigolfHole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("HoleBox"));
    this->HoleBox = (UBoxComponent*)RootComponent;
}


