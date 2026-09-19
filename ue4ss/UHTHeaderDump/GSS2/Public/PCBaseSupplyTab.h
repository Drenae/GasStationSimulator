#pragma once
#include "CoreMinimal.h"
#include "BasketItemStruct.h"
#include "ECategoryFilter.h"
#include "PcBaseTab.h"
#include "PCBaseSupplyTab.generated.h"

class UPC_DeliveryStatus;
class UPC_OrderList;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPCBaseSupplyTab : public UPcBaseTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateOrderList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPC_OrderList> OrderListClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPC_OrderList* OrderListRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECategoryFilter MainCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPC_DeliveryStatus* WBP_ShopOrder_Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VehicleToSpawn;
    
    UPCBaseSupplyTab();

    UFUNCTION(BlueprintCallable)
    void NativeConstruct();
    
    UFUNCTION(BlueprintCallable)
    void DirectBuy(FBasketItemStruct ItemToBuy);
    
};

