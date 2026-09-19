#include "PartySpotTable.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent

APartySpotTable::APartySpotTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BasketScreen = CreateDefaultSubobject<UChildActorComponent>(TEXT("BasketScreen"));
    this->PartySpotScreen = NULL;
    this->ProductReason = EProductReason::Full;
    this->bIsFull = false;
    this->bIsBlocked = true;
    this->BasketScreen->SetupAttachment(RootComponent);
}

void APartySpotTable::SetProductReason(EProductReason NewProductReason) {
}

void APartySpotTable::SetIsFull(bool NewValue) {
}

void APartySpotTable::SetIsBlocked(bool NewValue) {
}

void APartySpotTable::SetDrawnProduct(FDrawnProduct NewDrawnProduct) {
}

void APartySpotTable::RandomItem(UDA_PartySpotProducts* PartySpotProducts) {
}



EProductReason APartySpotTable::GetProductReason() {
    return EProductReason::Full;
}

TArray<FProductAmount> APartySpotTable::GetProductAmount() {
    return TArray<FProductAmount>();
}

bool APartySpotTable::GetIsFull() {
    return false;
}

bool APartySpotTable::GetIsBlocked() {
    return false;
}

FDrawnProduct APartySpotTable::GetDrawnProduct() {
    return FDrawnProduct{};
}


