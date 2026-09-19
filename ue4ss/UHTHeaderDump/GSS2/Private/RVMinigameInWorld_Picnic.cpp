#include "RVMinigameInWorld_Picnic.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ARVMinigameInWorld_Picnic::ARVMinigameInWorld_Picnic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BasketMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BasketMesh"));
    this->TableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TableMesh"));
    this->PicnicSettings = NULL;
    this->TimeToComplete = 30.00f;
    this->MaxTraceLenght = 500;
    this->TeleportLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TeleportLocation"));
    this->bCanShowProducts = false;
    this->TimeToShowProductList = 3.00f;
    this->AmountOfProductsInBasketRequired = 3;
    this->bLoseWhenTimeEnds = false;
    this->bListOnScreen = false;
    this->SelectedProduct = NULL;
    this->AmountOfProductsInterpolatingToBasket = 0;
    this->ProductsAlreadySpawned = 0;
    this->AllProductsSpawned = false;
    this->BasketMesh->SetupAttachment(RootComponent);
    this->TableMesh->SetupAttachment(RootComponent);
    this->TeleportLocation->SetupAttachment(BasketMesh);
}

void ARVMinigameInWorld_Picnic::SpawnProducts(TArray<TSoftClassPtr<APicnicProduct>> ProductClasses) {
}

void ARVMinigameInWorld_Picnic::SelectFirstProductInSlot() {
}

void ARVMinigameInWorld_Picnic::OnItemPlaced(APicnicProduct* PicnicProduct) {
}


void ARVMinigameInWorld_Picnic::OnAllProductsSpawned_Implementation() {
}


void ARVMinigameInWorld_Picnic::GenerateProductsList(int32 AmountOfProductsToPick) {
}


void ARVMinigameInWorld_Picnic::BroadcastOnItemGrabbed(APicnicProduct* PicnicProduct) {
}


