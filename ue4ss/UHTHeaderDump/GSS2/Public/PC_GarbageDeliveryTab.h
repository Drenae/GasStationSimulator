#pragma once
#include "CoreMinimal.h"
#include "PcBaseTab.h"
#include "PC_GarbageDeliveryTab.generated.h"

class AActor;
class UButton;
class UPC_DeliveryStatus;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPC_GarbageDeliveryTab : public UPcBaseTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPC_DeliveryStatus* WBP_ShopOrder_Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VehicleRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* GarbageTruckButton;
    
    UPC_GarbageDeliveryTab();

    UFUNCTION(BlueprintCallable)
    void TryOrderGarbageCollector();
    
    UFUNCTION(BlueprintCallable)
    void OrderGarbageCollector(TSoftClassPtr<AActor> Vehicle);
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeConstruct();
    
};

