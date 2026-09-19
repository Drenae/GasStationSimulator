#include "Shelf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "InventoryComponent.h"
#include "Templates/SubclassOf.h"

AShelf::AShelf(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->ShelfType = EShelfType::ShopShelf;
    this->ItemInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("ItemInventory"));
    this->bShelfMode = true;
    this->RotateProductsToShelf = true;
    this->SpecificRotation = -90.00f;
    this->RotateProductsToShelfX = false;
    this->SpecificRotationX = -90.00f;
    this->RotateProductsToShelfY = false;
    this->SpecificRotationY = -90.00f;
    this->StartCullDistance = 2500;
    this->EndCullDistance = 4000;
    this->bUnderRestocking = false;
    this->bCanBeRestocked = true;
    this->RestockThreshold = 75.00f;
    this->ProductRestockFilling = 0.00f;
    this->bAutoRestock = true;
    this->StaticMesh->SetupAttachment(RootComponent);
}

void AShelf::SortProductSplines() {
}

void AShelf::SortProductsByShelfPriorities(TArray<FItemsToRestock>& ProductsToSort) {
}

void AShelf::SetRestockingParams(TSoftClassPtr<AShelf> InShelfClass, const float InRestockThreshold, const float InProductRestockFilling, const bool InbAutoRestock, const TArray<FRestockProductData>& InRestockingData) {
}

int32 AShelf::RemoveProduct(TSubclassOf<AItem> ItemClass, int32 Amount) {
    return 0;
}


bool AShelf::IsItemCompatible(TSubclassOf<AItem> ItemToCheck) {
    return false;
}

bool AShelf::IsEmpty() {
    return false;
}

bool AShelf::IsCompatibile(TSubclassOf<AItem> ItItemClassem) {
    return false;
}

bool AShelf::HasProductSpace(TSubclassOf<AItem> ItemToCheck, int32& AmountOfSpace) {
    return false;
}

EItemTypeCategory AShelf::GetShelfProductsCategory() {
    return EItemTypeCategory::None;
}

float AShelf::GetShelfCapacity() {
    return 0.0f;
}

FRestockProductData AShelf::GetRestockData(TSubclassOf<AItem> ItemToCheck) const {
    return FRestockProductData{};
}

TArray<TSubclassOf<AItem>> AShelf::GetProductClassesOnTheShelf() {
    return TArray<TSubclassOf<AItem>>();
}

int32 AShelf::GetProductCapacity(TSubclassOf<AItem> ItemClass) const {
    return 0;
}

int32 AShelf::GetItemAmount(TSubclassOf<AItem> ItemToCheck) {
    return 0;
}

FName AShelf::GetInteractionName_Implementation() {
    return NAME_None;
}

FName AShelf::GetInteractionName_Implementation() {
    return NAME_None;
}

TArray<FItemsToRestock> AShelf::GetAmountOfProductsToRestock() {
    return TArray<FItemsToRestock>();
}

bool AShelf::CheckItem(TSubclassOf<AItem> ItemClass) {
    return false;
}

void AShelf::ChangeShelfRestockThreshold(float NewThreshold) {
}

bool AShelf::ChangeProductRestockValue(float ValueAdded, TSubclassOf<AItem> RefilledProductClass) {
    return false;
}

bool AShelf::bIsShelfBelowRestockCapacity() {
    return false;
}

int32 AShelf::AddProduct(TSubclassOf<AItem> ItemClass, int32 Amount) {
    return 0;
}


