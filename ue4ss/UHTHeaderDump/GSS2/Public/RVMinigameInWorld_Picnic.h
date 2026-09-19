#pragma once
#include "CoreMinimal.h"
#include "OnCorrectItemPlacedDelegate.h"
#include "OnPicnicItemGrabbedDelegate.h"
#include "RvMinigameInWorld.h"
#include "RVMinigameInWorld_Picnic.generated.h"

class APicnicProduct;
class URVPicnicBasketSettings;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ARVMinigameInWorld_Picnic : public ARvMinigameInWorld {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BasketMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TableMesh;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCorrectItemPlaced OnCorrectItemPlaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPicnicItemGrabbed OnItemGrabbed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVPicnicBasketSettings* PicnicSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTraceLenght;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APicnicProduct*> ProductsToPutInTheBasket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TeleportLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> SpawnSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanShowProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToShowProductList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfProductsInBasketRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoseWhenTimeEnds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListOnScreen;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APicnicProduct*> SpawnedProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APicnicProduct*> ProductsInTheBasket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APicnicProduct* SelectedProduct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfProductsInterpolatingToBasket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProductsAlreadySpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllProductsSpawned;
    
public:
    ARVMinigameInWorld_Picnic(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SpawnProducts(TArray<TSoftClassPtr<APicnicProduct>> ProductClasses);
    
    UFUNCTION(BlueprintCallable)
    void SelectFirstProductInSlot();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnItemPlaced(APicnicProduct* PicnicProduct);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIncorrectItemPlaced();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAllProductsSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GenerateSpawnSlots();
    
    UFUNCTION(BlueprintCallable)
    void GenerateProductsList(int32 AmountOfProductsToPick);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Gamepad_ConfirmProductList();
    
public:
    UFUNCTION(BlueprintCallable)
    void BroadcastOnItemGrabbed(APicnicProduct* PicnicProduct);
    
};

