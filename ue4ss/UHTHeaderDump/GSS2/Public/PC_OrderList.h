#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CollectibleItems -ObjectName=CollectibleCardStruct -FallbackName=CollectibleCardStruct
#include "BasketItemStruct.h"
#include "ECategoryFilter.h"
#include "GSSInnerWidget.h"
#include "OnBuyButtonClickedDelegate.h"
#include "Templates/SubclassOf.h"
#include "PC_OrderList.generated.h"

class AActor;
class ACollectible;
class AGSSPlayerCharacter;
class AGSSPlayerState;
class UButton;
class UPC_OrderList_Position;
class UPC_OrderPreset;
class UScrollBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPC_OrderList : public UGSSInnerWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBasketItemStruct> OrderBasket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCollectibleCardStruct> OrderCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* OrderListScroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* BuyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* OrderCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CappacityRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TotalSpaceRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MagazineCapacityRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* AirportTotalSpaceRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* AirportMagazineCapacityRef;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeliveryCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeliveryTreshold;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuyButtonClicked OnBuyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPC_OrderList_Position> OrderPositionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VehicleToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECategoryFilter Category;
    
    UPC_OrderList();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDeliveryFee(bool DisplayFee, bool DisplayNoFee);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCardScroll();
    
    UFUNCTION(BlueprintCallable)
    void UpdateBasket();
    
    UFUNCTION(BlueprintCallable)
    void TryOrderProducts();
    
    UFUNCTION(BlueprintCallable)
    void SavePreset(UPC_OrderPreset* OrderPresetButton);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCard(FCollectibleCardStruct CardStruct);
    
    UFUNCTION(BlueprintCallable)
    void OrderProducts(TSoftClassPtr<AActor> Vehicle, AGSSPlayerState* PlayerState, AGSSPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void NativeDestruct();
    
    UFUNCTION(BlueprintCallable)
    void NativeConstruct();
    
    UFUNCTION(BlueprintCallable)
    void LoadPreviousPreset();
    
    UFUNCTION(BlueprintCallable)
    void LoadPreset(UPC_OrderPreset* OrderPresetButton);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBasketItemStruct> GetItemsInBasket();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCollectibleCardStruct> GetCardsBasket();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBasketCost(bool& WasFeeAdded);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBasketCapacity();
    
    UFUNCTION(BlueprintCallable)
    void BuyCards();
    
    UFUNCTION(BlueprintCallable)
    void AddToShoppingBasket(FBasketItemStruct ItemToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddNewBasketPosition();
    
    UFUNCTION(BlueprintCallable)
    void AddCardToShopingBasket(FCollectibleCardStruct CardStruct, TSubclassOf<ACollectible> Collectible);
    
};

