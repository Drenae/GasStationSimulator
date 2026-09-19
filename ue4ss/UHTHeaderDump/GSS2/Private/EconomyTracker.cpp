#include "EconomyTracker.h"

UEconomyTracker::UEconomyTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UEconomyTracker::SetFuelProducts(FFuelProduct NewFuelManaged) {
}

void UEconomyTracker::SetEconomyProducts(TArray<FEconomyProduct> NewProductsManaged) {
}

void UEconomyTracker::ProductSold(UClass* ProductClass, int32 Amount, float ValuePerOne, EEconomyType ProductEconomyType) {
}

void UEconomyTracker::ProductBought(UClass* ProductClass, int32 AmountPerSingleOrder, int32 Amount, float ValuePerSingleOrder, EEconomyType ProductEconomyType) {
}

FFuelProduct UEconomyTracker::GetFuelProducts() {
    return FFuelProduct{};
}

TArray<FEconomyProduct> UEconomyTracker::GetEconomyProducts() {
    return TArray<FEconomyProduct>();
}

void UEconomyTracker::FuelSold(float Amount, float FuelValue) {
}

void UEconomyTracker::FuelBought(float Amount, float FuelValue) {
}

int32 UEconomyTracker::FindProductIndex(UClass* ProductClass) {
    return 0;
}


