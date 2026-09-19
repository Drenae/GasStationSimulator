#pragma once
#include "CoreMinimal.h"
#include "PcBaseTab.h"
#include "PC_PaintingTab.generated.h"

class AActor;
class AGSSPlayerState;
class UButton;
class UPC_DeliveryStatus;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPC_PaintingTab : public UPcBaseTab {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* GarbageTruckButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PaintingCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepaintCost;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPC_DeliveryStatus* WBP_ShopOrder_Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VehicleRowName;
    
    UPC_PaintingTab();

    UFUNCTION(BlueprintCallable)
    void TryOrderPainting();
    
private:
    UFUNCTION(BlueprintCallable)
    void OrderPainting(TSoftClassPtr<AActor> Vehicle, AGSSPlayerState* PS);
    
    UFUNCTION(BlueprintCallable)
    void NativeConstruct();
    
};

