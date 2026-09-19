#include "DishesStack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ADishesStack::ADishesStack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));
    this->bForDirtyDishes = false;
    this->bHighlight = false;
    this->SpaceLimit = 0;
    this->ChoosingPriority = 0;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

ADishItem* ADishesStack::TakeFromTopFromActor(AActor* Actor) {
    return NULL;
}

ADishItem* ADishesStack::TakeFromTop() {
    return NULL;
}

void ADishesStack::SetHighlight_Implementation(bool bNewHighlight) {
}

bool ADishesStack::Place(ADishItem* Dish, bool bInitialPlacemenet, bool bIgnoreSpaceLimit, EDishPlacementResult& Result) {
    return false;
}

bool ADishesStack::IsForDirtyDishes() const {
    return false;
}

ADishItem* ADishesStack::GetTopDishFromActor(AActor* Actor) {
    return NULL;
}

ADishItem* ADishesStack::GetTopDish() {
    return NULL;
}

ADishesStack* ADishesStack::GetDishStackFromActor(AActor* Actor) {
    return NULL;
}

int32 ADishesStack::GetChoosingPriority() const {
    return 0;
}

bool ADishesStack::CheckFilterPass(ADishItem* DishItem) {
    return false;
}


