#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EEconomyType.h"
#include "EconomyProduct.h"
#include "FuelProduct.h"
#include "EconomyTracker.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UEconomyTracker : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEconomyProduct> ProductsManaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFuelProduct FuelManaged;
    
public:
    UEconomyTracker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFuelProducts(FFuelProduct NewFuelManaged);
    
    UFUNCTION(BlueprintCallable)
    void SetEconomyProducts(TArray<FEconomyProduct> NewProductsManaged);
    
    UFUNCTION(BlueprintCallable)
    void ProductSold(UClass* ProductClass, int32 Amount, float ValuePerOne, EEconomyType ProductEconomyType);
    
    UFUNCTION(BlueprintCallable)
    void ProductBought(UClass* ProductClass, int32 AmountPerSingleOrder, int32 Amount, float ValuePerSingleOrder, EEconomyType ProductEconomyType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFuelProduct GetFuelProducts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEconomyProduct> GetEconomyProducts();
    
    UFUNCTION(BlueprintCallable)
    void FuelSold(float Amount, float FuelValue);
    
    UFUNCTION(BlueprintCallable)
    void FuelBought(float Amount, float FuelValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 FindProductIndex(UClass* ProductClass);
    
};

