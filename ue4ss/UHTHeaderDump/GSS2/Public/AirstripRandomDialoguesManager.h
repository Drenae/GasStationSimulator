#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "JoeOrderGeneratedDelegate.h"
#include "JoeOrderInfo.h"
#include "JoeTradingInfo.h"
#include "AirstripRandomDialoguesManager.generated.h"

class AItem;
class UInventoryComponent;

UCLASS(Blueprintable)
class GSS2_API AAirstripRandomDialoguesManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoeOrderGenerated OnJoeOrderGenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRandomCallsManagerActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsJoeMuted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJoeTradingInfo> JoeTradingRequestedProducts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfLeftBlueprints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AItem> BuildingBlueprintClassItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoeOrderInfo JoeOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountOfHappy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountOfMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTradeCompleted;
    
    AAirstripRandomDialoguesManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TradeWithJoe();
    
    UFUNCTION(BlueprintCallable)
    bool HasFreeSpaceInInventory();
    
    UFUNCTION(BlueprintCallable)
    void GenerateJoeOrder();
    
    UFUNCTION(BlueprintCallable)
    void AddBlueprintToInventory(UInventoryComponent* InventoryComponent, TSoftClassPtr<AItem> Blueprint);
    
};

