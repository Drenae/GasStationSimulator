#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ECategoryFilter.h"
#include "EFuelState.h"
#include "EItemTypeCategory.h"
#include "FuelStatusDelegate.h"
#include "FuelUpdatedDelegate.h"
#include "InventoryUpdateDelegate.h"
#include "MoneyStatusDelegate.h"
#include "SlotStruct.h"
#include "InventoryComponent.generated.h"

class AItem;
class AKeyItem;
class UInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerStateInventory;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryUpdate OnInventoryUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFuelUpdated OnFuelUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFuelStatus OnFuelStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoneyStatus OnMoneyStatuedUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InventoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlotStruct> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlotStruct> NotFoundItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFuelCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFuelCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFuelState FuelState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float money;
    
    UInventoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateFuelStatus();
    
    UFUNCTION(BlueprintCallable)
    int32 SellItem(const FSlotStruct ItemToSell, const int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveSoftItem(TSoftClassPtr<AItem> ItemSoftClass, int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromInventorySoft(TSoftClassPtr<AItem> Item, int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LoadGameBeginPlay(bool bGameLoaded);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty();
    
    UFUNCTION(BlueprintCallable)
    bool InventoryhasItem(FSlotStruct ItemStruct);
    
    UFUNCTION(BlueprintCallable)
    bool HasKeyItem(TSoftClassPtr<AKeyItem> KeyItemClass);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSoftClassPtr<AItem>> GetItemsOfSubCategory(EItemTypeCategory SubCategory);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSoftClassPtr<AItem>> GetItemsOfCategory(ECategoryFilter Category);
    
    UFUNCTION(BlueprintCallable)
    FSlotStruct GetItemFromInventory(FSlotStruct ItemToFind);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemCountOfCategory(ECategoryFilter Category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCapacityCondition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableCapacity() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetAmountOfItemSoftClass(TSoftClassPtr<AItem> ItemClass);
    
    UFUNCTION(BlueprintCallable)
    bool FindSoftItem(TSoftClassPtr<AItem> ItemClass);
    
    UFUNCTION(BlueprintCallable)
    void ExportInventoryItems(UInventoryComponent* OtherInventory, bool IgnoreLimit);
    
    UFUNCTION(BlueprintCallable)
    void CleanInventory();
    
    UFUNCTION(BlueprintCallable)
    void ChangeFavourite(FSlotStruct Slot, bool Change);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalculateAndGetCurrentCappacity();
    
    UFUNCTION(BlueprintCallable)
    int32 AddSoftItem(TSoftClassPtr<AItem> ItemSoftClass, int32 Quantity, const bool IgnoreLimit);
    
    UFUNCTION(BlueprintCallable)
    void AddMoneyInventory(float NewMoney);
    
    UFUNCTION(BlueprintCallable)
    float AddFuel(float Amount);
    
};

