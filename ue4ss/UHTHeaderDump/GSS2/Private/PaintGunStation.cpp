#include "PaintGunStation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent

APaintGunStation::APaintGunStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PaintGun = CreateDefaultSubobject<UChildActorComponent>(TEXT("PaintGun"));
    this->PaintGun->SetupAttachment(RootComponent);
}


