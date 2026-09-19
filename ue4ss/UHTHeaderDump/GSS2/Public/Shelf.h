#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EItemTypeCategory.h"
#include "EShelfType.h"
#include "InteractableBuilding.h"
#include "ItemsToRestock.h"
#include "OnRestockDataSetDelegate.h"
#include "OnShelfRestockFillingChangedDelegate.h"
#include "OnShelfRestockedDelegate.h"
#include "ProductsLineStruct.h"
#include "ProductsStruct.h"
#include "RestockProductData.h"
#include "Templates/SubclassOf.h"
#include "Shelf.generated.h"

class AItem;
class AShelf;
class UInventoryComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API AShelf : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AItem>, FGameplayTag> RestrictedProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShelfType ShelfType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* ItemInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShelfMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RotateProductsToShelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryNameText;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShelfRestockFillingChanged OnShelfCapacityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShelfRestocked OnShelfRestocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRestockDataSet OnRestockDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductsLineStruct> ProductsLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductsStruct> Products;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AItem>> CompatibileItemClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecificRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RotateProductsToShelfX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecificRotationX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RotateProductsToShelfY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecificRotationY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnderRestocking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeRestocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestockThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProductRestockFilling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRestock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRestockProductData> RestockingData;
    
    AShelf(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SortProductSplines();
    
    UFUNCTION(BlueprintCallable)
    void SortProductsByShelfPriorities(UPARAM(Ref) TArray<FItemsToRestock>& ProductsToSort);
    
    UFUNCTION(BlueprintCallable)
    void SetRestockingParams(TSoftClassPtr<AShelf> InShelfClass, const float InRestockThreshold, const float InProductRestockFilling, const bool InbAutoRestock, const TArray<FRestockProductData>& InRestockingData);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveProduct(TSubclassOf<AItem> ItemClass, int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReFillShelfes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemCompatible(TSubclassOf<AItem> ItemToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompatibile(TSubclassOf<AItem> ItItemClassem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasProductSpace(TSubclassOf<AItem> ItemToCheck, int32& AmountOfSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EItemTypeCategory GetShelfProductsCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShelfCapacity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRestockProductData GetRestockData(TSubclassOf<AItem> ItemToCheck) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<AItem>> GetProductClassesOnTheShelf();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProductCapacity(TSubclassOf<AItem> ItemClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemAmount(TSubclassOf<AItem> ItemToCheck);
    
    UFUNCTION(BlueprintCallable)
    FName GetInteractionName_Implementation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetInteractionName();
    
    UFUNCTION(BlueprintCallable)
    TArray<FItemsToRestock> GetAmountOfProductsToRestock();
    
    UFUNCTION(BlueprintCallable)
    bool CheckItem(TSubclassOf<AItem> ItemClass);
    
    UFUNCTION(BlueprintCallable)
    void ChangeShelfRestockThreshold(float NewThreshold);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeProductRestockValue(float ValueAdded, TSubclassOf<AItem> RefilledProductClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool bIsShelfBelowRestockCapacity();
    
    UFUNCTION(BlueprintCallable)
    int32 AddProduct(TSubclassOf<AItem> ItemClass, int32 Amount);
    
};

