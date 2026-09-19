#include "GSSCharacterBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CollectibleItems -ObjectName=CollectiblesInventoryComponent -FallbackName=CollectiblesInventoryComponent
#include "InventoryComponent.h"

AGSSCharacterBase::AGSSCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("ItemInventory"));
    this->HandleActorInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("HandleActorInventory"));
    this->AirplaneItemInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("AirplaneItemInventory"));
    this->CollectiblesItemsInventory = CreateDefaultSubobject<UCollectiblesInventoryComponent>(TEXT("CollectiblesItemInventory"));
    this->HandleActor = NULL;
}


void AGSSCharacterBase::SetHandleActor(AActor* NewHandleActor) {
}

AActor* AGSSCharacterBase::GetHandleActor() {
    return NULL;
}


