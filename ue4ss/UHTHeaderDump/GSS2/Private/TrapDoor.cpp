#include "TrapDoor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ATrapDoor::ATrapDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
    this->MainMesh = (UStaticMeshComponent*)RootComponent;
}

void ATrapDoor::TryTeleport() {
}





