#pragma once
#include "CoreMinimal.h"
#include "BasketFilledDelegate.h"
#include "DrawnProduct.h"
#include "EProductReason.h"
#include "ProductAmount.h"
#include "Shelf.h"
#include "PartySpotTable.generated.h"

class APartySpotScreen;
class UChildActorComponent;
class UDA_PartySpotProducts;

UCLASS(Blueprintable)
class GSS2_API APartySpotTable : public AShelf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasketFilled OnBasketFilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* BasketScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APartySpotScreen* PartySpotScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OriginalPathName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrawnProduct DrawnProduct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProductAmount> ProductAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProductReason ProductReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBlocked;
    
public:
    APartySpotTable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetProductReason(EProductReason NewProductReason);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFull(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIsBlocked(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawnProduct(FDrawnProduct NewDrawnProduct);
    
    UFUNCTION(BlueprintCallable)
    void RandomItem(UDA_PartySpotProducts* PartySpotProducts);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Notification();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemAdded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EProductReason GetProductReason();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FProductAmount> GetProductAmount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFull();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDrawnProduct GetDrawnProduct();
    
};

