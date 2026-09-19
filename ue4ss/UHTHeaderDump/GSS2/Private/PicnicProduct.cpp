#include "PicnicProduct.h"

APicnicProduct::APicnicProduct(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = EPicnicProductType::EPPT_Empty;
    this->MovementDuration = 0.50f;
    this->Hop = 30.00f;
    this->IsInTheBasket = false;
    this->SlotIndex = 0;
    this->CurrentMovementDuration = 0.00f;
    this->bIsMoving = false;
}


