#include "CarWashTrashSpawnLocation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent

ACarWashTrashSpawnLocation::ACarWashTrashSpawnLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->Billboard = (UBillboardComponent*)RootComponent;
}


