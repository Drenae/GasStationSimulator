#include "SD_AiCharacterComponent.h"

USD_AiCharacterComponent::USD_AiCharacterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Drunkenness = 0.00f;
    this->BarCustmerType = EBarCustomerNativeType::None;
}


