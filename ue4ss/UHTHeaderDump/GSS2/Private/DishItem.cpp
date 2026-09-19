#include "DishItem.h"

ADishItem::ADishItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DishType = EDishType::PLATE;
    this->PlacingDuration = 0.50f;
    this->PlacingMovementHeight = 20.00f;
    this->DishesStack = NULL;
    this->PreviousDishesStack = NULL;
}

void ADishItem::SetDishesStack(ADishesStack* NewDishesStack) {
}


void ADishItem::PlaceInPosition(FVector WorldLocation, bool bInitialPlacement) {
}

bool ADishItem::IsWet() const {
    return false;
}

int32 ADishItem::GetStains() const {
    return 0;
}

ADishesStack* ADishItem::GetPreviousDishesStack() const {
    return NULL;
}

EDishType ADishItem::GetDishType() const {
    return EDishType::PLATE;
}

ADishesStack* ADishItem::GetDishesStack() const {
    return NULL;
}


