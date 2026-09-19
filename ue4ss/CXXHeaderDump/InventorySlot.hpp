#ifndef UE4SS_SDK_InventorySlot_HPP
#define UE4SS_SDK_InventorySlot_HPP

class UInventorySlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NoStock;                                                  // 0x0268 (size: 0x8)
    class UWidgetAnimation* OnHovAll;                                                 // 0x0270 (size: 0x8)
    class UWidgetAnimation* OnHov10;                                                  // 0x0278 (size: 0x8)
    class UWidgetAnimation* OnHov5;                                                   // 0x0280 (size: 0x8)
    class UDragoButton* AddPercentButton;                                             // 0x0288 (size: 0x8)
    class UImage* AirstripIcon;                                                       // 0x0290 (size: 0x8)
    class UTextBlock* CurrentProductPercent_TXT_2;                                    // 0x0298 (size: 0x8)
    class UImage* GamePadPlace10_IMG;                                                 // 0x02A0 (size: 0x8)
    class UImage* GamePadPlace10_IMG_1;                                               // 0x02A8 (size: 0x8)
    class UImage* GamePadPlace5_IMG;                                                  // 0x02B0 (size: 0x8)
    class UImage* GamePadPlace5_IMG_1;                                                // 0x02B8 (size: 0x8)
    class UImage* GamePadPlaceAll_IMG;                                                // 0x02C0 (size: 0x8)
    class UImage* Hovering_IMG;                                                       // 0x02C8 (size: 0x8)
    class UDragoButton* HoverVizualTrigger;                                           // 0x02D0 (size: 0x8)
    class UImage* Image_58;                                                           // 0x02D8 (size: 0x8)
    class UImage* Image_105;                                                          // 0x02E0 (size: 0x8)
    class UImage* Image_198;                                                          // 0x02E8 (size: 0x8)
    class UImage* Image_207;                                                          // 0x02F0 (size: 0x8)
    class UImage* Item_ICON;                                                          // 0x02F8 (size: 0x8)
    class UTextBlock* Name;                                                           // 0x0300 (size: 0x8)
    class UTextBlock* Place10_TXT;                                                    // 0x0308 (size: 0x8)
    class UDragoButton* Place10Button;                                                // 0x0310 (size: 0x8)
    class UTextBlock* Place5_TXT;                                                     // 0x0318 (size: 0x8)
    class UTextBlock* Place5_TXT_1;                                                   // 0x0320 (size: 0x8)
    class UDragoButton* Place5Button;                                                 // 0x0328 (size: 0x8)
    class UDragoButton* PlaceAll_Button;                                              // 0x0330 (size: 0x8)
    class UImage* ProgressSegmentColor;                                               // 0x0338 (size: 0x8)
    class UTextBlock* QuantityInventory;                                              // 0x0340 (size: 0x8)
    class UDragoButton* RemovePercentbutton;                                          // 0x0348 (size: 0x8)
    class UHorizontalBox* ShelfQuantity;                                              // 0x0350 (size: 0x8)
    class UTextBlock* ShelfQuantityAmount;                                            // 0x0358 (size: 0x8)
    class UWidgetSwitcher* SlotSwitcher;                                              // 0x0360 (size: 0x8)
    class UVerticalBox* VerticalBox;                                                  // 0x0368 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_LeftButton;                                     // 0x0370 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_LeftButton_1;                                   // 0x0378 (size: 0x8)
    TSubclassOf<class AItem> ItemClass;                                               // 0x0380 (size: 0x8)
    FInventorySlot_COnClicked OnClicked;                                              // 0x0388 (size: 0x10)
    void OnClicked(class UInventorySlot_C* InventorySlot, bool IsRemoved);
    class AShelf* Shelf;                                                              // 0x0398 (size: 0x8)
    int32 AmountItemToPut;                                                            // 0x03A0 (size: 0x4)
    class UUserWidget* UserWidget;                                                    // 0x03A8 (size: 0x8)
    class UWidgetAnimation* OnHover;                                                  // 0x03B0 (size: 0x8)
    bool IsUnHover;                                                                   // 0x03B8 (size: 0x1)
    TArray<UDragoButton*> ButtonArray;                                                // 0x03C0 (size: 0x10)
    bool NewVar_0;                                                                    // 0x03D0 (size: 0x1)
    TMap<int32, int32> ButtonMap;                                                     // 0x03D8 (size: 0x50)
    int32 selectRowButton;                                                            // 0x0428 (size: 0x4)
    int32 KeySelectedButton;                                                          // 0x042C (size: 0x4)
    class UInventoryComponent* ActiveInventory;                                       // 0x0430 (size: 0x8)
    bool IsRefillment;                                                                // 0x0438 (size: 0x1)
    FLinearColor GradientColor;                                                       // 0x043C (size: 0x10)
    FInventorySlot_COnRestockValueChanged OnRestockValueChanged;                      // 0x0450 (size: 0x10)
    void OnRestockValueChanged(class UInventorySlot_C* Slot, float Value);
    class UInventoryComponent* WarehouseInventory;                                    // 0x0460 (size: 0x8)
    class UInventoryComponent* AirstripInventory;                                     // 0x0468 (size: 0x8)
    FInventorySlot_COnPlaced OnPlaced;                                                // 0x0470 (size: 0x10)
    void OnPlaced();
    FInventorySlot_COnNoEnoughStock OnNoEnoughStock;                                  // 0x0480 (size: 0x10)
    void OnNoEnoughStock();

    void ShowGamepadHints(bool IsSlotActive);
    void PutItems(bool& Success);
    void TryToPutItems(int32 Max);
    void CalculateItemsToPut(int32 Ceiling);
    void PlayNoStockAnimation();
    void CheckTequilla(TSoftClassPtr<AItem> ItemV1, TSoftClassPtr<AItem> ItemV2, bool& CanPut);
    void SetHovered(bool Condition);
    void GetActualIndex(int32& newIndex);
    void decrementsKey(bool& IsChanged);
    void incrementsKey(bool& IsChanged);
    void Decrement Row(bool& IsChanged);
    void IncrementRow(bool& IsChanged);
    void Click();
    void On Hover(bool IsHovered);
    void RefreshSlot();
    void BndEvt__Place10Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Place10Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__HoverVizualTrigger_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__HoverVizualTrigger_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__PlaceAll_Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__PlaceAll_Button_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__InventorySlot_Place5Button_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__InventorySlot_Place10Button_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__InventorySlot_PlaceAll_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void GamePadClickButton(int32 Index);
    void GamePadHoverSlot(int32 Index, bool Active);
    void SwitchInventorySlotView(bool IsRefilling);
    void BndEvt__Place5Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__InventorySlot_AddPercentButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__InventorySlot_RemovePercentbutton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void EnableRestockingButtons(bool EnableButtons);
    void OnInitialized();
    void BndEvt__Place5Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void GamePadPercentButtonClick(bool Add);
    void ExecuteUbergraph_InventorySlot(int32 EntryPoint);
    void OnNoEnoughStock__DelegateSignature();
    void OnPlaced__DelegateSignature();
    void OnRestockValueChanged__DelegateSignature(class UInventorySlot_C* Slot, float Value);
    void OnClicked__DelegateSignature(class UInventorySlot_C* InventorySlot, bool IsRemoved);
}; // Size: 0x490

#endif
