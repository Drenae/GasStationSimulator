#pragma once
#include "CoreMinimal.h"
#include "EInventoryChildType.h"
#include "EItemTypeCategory.h"
#include "ESortType.h"
#include "GSSBaseWidget.h"
#include "SlotStruct.h"
#include "InventoryWidget.generated.h"

class UInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class GSS2_API UInventoryWidget : public UGSSBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EItemTypeCategory> CurrentCategoryTypes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESortType CurrentSortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSlotStruct> CurrentItems;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryChildType InventoryType;
    
public:
    UInventoryWidget();

    UFUNCTION(BlueprintCallable)
    TArray<FSlotStruct> SortInventory(ESortType SortType, TArray<FSlotStruct> FilteredItems);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSortType(ESortType InCurrentSortType);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentItems(TArray<FSlotStruct> InCurrentItems);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAllButtonsNormalState();
    
    UFUNCTION(BlueprintCallable)
    void RemoveCategory(EItemTypeCategory InItemTypeCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshInventory_Code();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCategoryRefreshAnimation();
    
    UFUNCTION(BlueprintCallable)
    int32 MoveItemBeetwenInventories(UInventoryComponent* SourceInventory, UInventoryComponent* TargetInventory, FSlotStruct Item, int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    bool IsItemInInventory(const TArray<FSlotStruct> ItemsToCheckIn, const FSlotStruct InItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESortType GetCurrentSortType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSlotStruct> GetCurrentItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EItemTypeCategory> GetCurrentCategories();
    
    UFUNCTION(BlueprintCallable)
    TArray<FSlotStruct> FilterInventory(ESortType SortType);
    
    UFUNCTION(BlueprintCallable)
    void ClearCategories();
    
    UFUNCTION(BlueprintCallable)
    void CheckAndGetItemFromInventory(const TArray<FSlotStruct> ItemsToCheckIn, const FSlotStruct InItem, FSlotStruct& Slot_out, bool& boo);
    
    UFUNCTION(BlueprintCallable)
    void AddToCategory(EItemTypeCategory InItemTypeCategory);
    
    UFUNCTION(BlueprintCallable)
    TArray<FSlotStruct> AddQuantityToItem(TArray<FSlotStruct> ItemsArray, FSlotStruct ToAdd, int32 QuantityToAdd);
    
};

