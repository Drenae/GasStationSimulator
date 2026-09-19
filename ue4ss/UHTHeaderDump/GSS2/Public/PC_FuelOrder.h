#pragma once
#include "CoreMinimal.h"
#include "EFuelMagazine.h"
#include "PcBaseTab.h"
#include "PC_FuelOrder.generated.h"

class AActor;
class UButton;
class UFloatButton;
class UGSSButton;
class UInventoryComponent;
class UPC_DeliveryStatus;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UPC_FuelOrder : public UPcBaseTab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFloatButton* Button100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFloatButton* Button200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFloatButton* Button500;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPC_DeliveryStatus* WBP_ShopOrder_Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSSButton* ReFuelButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSSButton* ResetOrderButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* PriceChartButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* GalonsAmmountTXT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ToPayAmmount_TXT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* FuelAmmountAirport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* FuelAmmountGasStation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TodayPrice_TXT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VehicleToSpawn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AmountToOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TodayCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFuelMagazine MagazineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* TargetInventory;
    
public:
    UPC_FuelOrder();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateTexts();
    
    UFUNCTION(BlueprintCallable)
    void UpdateStationFuel(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAirportFuel(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void TryOrderFuel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPriceChart();
    
private:
    UFUNCTION(BlueprintCallable)
    void SetTargetInventory();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentFuelType(EFuelMagazine InFuel);
    
    UFUNCTION(BlueprintCallable)
    void ResetOrder();
    
private:
    UFUNCTION(BlueprintCallable)
    void OrderFuel(TSoftClassPtr<AActor> Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnFuelAdded(float InValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFuelMagazine GetCurentFuelType();
    
};

