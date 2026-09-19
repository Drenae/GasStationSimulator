#include "JoeAirplaneTEST.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "InventoryComponent.h"

AJoeAirplaneTEST::AJoeAirplaneTEST(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMeshComponent"));
    this->MainMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->ItemInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("ItemInventory"));
}

UStaticMeshComponent* AJoeAirplaneTEST::GetMesh() {
    return NULL;
}


