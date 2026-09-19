#ifndef UE4SS_SDK_WBP_FuelPriceBoardWidget_HPP
#define UE4SS_SDK_WBP_FuelPriceBoardWidget_HPP

class UWBP_FuelPriceBoardWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* MinMaxPrice;                                              // 0x0268 (size: 0x8)
    class UTextBlock* ActivePrice;                                                    // 0x0270 (size: 0x8)
    class UTextBlock* DefaultPrice;                                                   // 0x0278 (size: 0x8)
    class UHorizontalBox* DefaultPriceBox;                                            // 0x0280 (size: 0x8)
    class UVerticalBox* DefaultPriceInfo;                                             // 0x0288 (size: 0x8)
    class UDragoButton* DragoResetButton;                                             // 0x0290 (size: 0x8)
    class UOverlay* ExitButtonOverlay;                                                // 0x0298 (size: 0x8)
    class UOverlay* HitBlockOverlay;                                                  // 0x02A0 (size: 0x8)
    class UImage* Image_82;                                                           // 0x02A8 (size: 0x8)
    class UImage* Image_236;                                                          // 0x02B0 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x02B8 (size: 0x8)
    class UTextBlock* MaxPriceReached;                                                // 0x02C0 (size: 0x8)
    class UOverlay* MinMaxOverlay;                                                    // 0x02C8 (size: 0x8)
    class UTextBlock* MinPriceReached;                                                // 0x02D0 (size: 0x8)
    class UTextBlock* NumberText1;                                                    // 0x02D8 (size: 0x8)
    class UTextBlock* NumberText2;                                                    // 0x02E0 (size: 0x8)
    class UTextBlock* NumberText3;                                                    // 0x02E8 (size: 0x8)
    class UPC_ExitButton_WBP_C* PC_ExitButton_WBP;                                    // 0x02F0 (size: 0x8)
    class UVerticalBox* PriceLimitsInfo;                                              // 0x02F8 (size: 0x8)
    class UDragoButton* SetDragoButton;                                               // 0x0300 (size: 0x8)
    class USizeBox* TopSegment_SizeBox;                                               // 0x0308 (size: 0x8)
    class UHorizontalBox* TrafficInfluenceBox;                                        // 0x0310 (size: 0x8)
    class UDragoButton* TrafficStatsButton;                                           // 0x0318 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_BottomButtonUpload_1;                           // 0x0320 (size: 0x8)
    class UWBP_SingleFuelPriceBoardText_C* WBP_Number1;                               // 0x0328 (size: 0x8)
    class UWBP_SingleFuelPriceBoardText_C* WBP_Number2;                               // 0x0330 (size: 0x8)
    class UWBP_SingleFuelPriceBoardText_C* WBP_Number3;                               // 0x0338 (size: 0x8)
    float FuelSellPrice;                                                              // 0x0340 (size: 0x4)
    TArray<int32> FuelPriceDigits;                                                    // 0x0348 (size: 0x10)
    class UTextBlock* CurrentNumberText;                                              // 0x0358 (size: 0x8)
    int32 PreviousDigitValue;                                                         // 0x0360 (size: 0x4)
    EFuelMagazine Fuel Type;                                                          // 0x0364 (size: 0x1)
    bool Is Active;                                                                   // 0x0365 (size: 0x1)
    class AFuelPriceBoard* Price Board Ref;                                           // 0x0368 (size: 0x8)
    FText PriceUpdateHourText;                                                        // 0x0370 (size: 0x18)
    class UPC_TrafficStatsBoard_WBP_C* TrafficStats;                                  // 0x0388 (size: 0x8)
    int32 GamepadKeyIndex;                                                            // 0x0390 (size: 0x4)
    bool Tutorial Opened;                                                             // 0x0394 (size: 0x1)
    FVector2D LastSize;                                                               // 0x0398 (size: 0x8)
    class UCameraComponent* ManagmentCamera;                                          // 0x03A0 (size: 0x8)
    FVector StartingCameraLocation;                                                   // 0x03A8 (size: 0xC)

    void ChangeSignVisibility(bool IsActive);
    void UnhooverElement(int32 Selection);
    void HooverFirstElement();
    void HooverPriceboardElement(bool UnhooverPrevious, int32 PreviousIndex);
    void ChangeActiveButton(int32 Direction);
    void HandleApplyButton();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void ApplyPrice();
    void ResetPrice();
    void EnableSetbutton(bool IsEnabled);
    void EnableResetButton(bool IsEnabled);
    void GetFuelPriceFromDigits(float& FuelPrice, bool& IsWithinLimits);
    void SetActive(bool bIsActive);
    void SetPriceDigit(int32 Index, int32 NewValue, bool SettingFromFloat, bool DoAnimation);
    void SetFuelPriceFromFloat(float FuelPrice, bool DoAnimation);
    void IncreasePriceDigit(int32 Index);
    void DecreasePriceDigit(int32 Index);
    void Init(EFuelMagazine FuelType, class AFuelPriceBoard* PriceBoardRef);
    void ShowMinMaxPopup();
    void UpdateActivePrice();
    void Destruct();
    void OnFuelDisplayPriceUpdated(const EFuelMagazine FuelType, const float NewPrice, const class UObject* ActionInstigator);
    void BndEvt__WBP_FuelPriceBoardWidget_WBP_Number2_K2Node_ComponentBoundEvent_9_OnDownArrow__DelegateSignature();
    void BndEvt__WBP_FuelPriceBoardWidget_WBP_Number3_K2Node_ComponentBoundEvent_10_OnDownArrow__DelegateSignature();
    void BndEvt__WBP_FuelPriceBoardWidget_WBP_Number4_K2Node_ComponentBoundEvent_11_OnDownArrow__DelegateSignature();
    void BndEvt__WBP_FuelPriceBoardWidget_WBP_Number2_K2Node_ComponentBoundEvent_13_OnUpArrow__DelegateSignature();
    void BndEvt__WBP_FuelPriceBoardWidget_WBP_Number3_K2Node_ComponentBoundEvent_14_OnUpArrow__DelegateSignature();
    void BndEvt__WBP_FuelPriceBoardWidget_WBP_Number4_K2Node_ComponentBoundEvent_15_OnUpArrow__DelegateSignature();
    void UpdateResetButtonVisibility();
    void ResetToCurrentDisplayValue();
    void BndEvt__WBP_FuelPriceBoardWidget_TrafficStatsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void OnDigitPressed();
    void UpdateSetButtonVisibility();
    void ActivateHitBlockOverlay(bool Activate);
    void UnlockOverlay();
    void CreateTrafficStats();
    void SetPrice();
    void ResetPriceUsed();
    void BndEvt__WBP_FuelPriceBoardWidget_DragoResetButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_FuelPriceBoardWidget_SetDragoButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_FuelPriceBoardWidget_PC_ExitButton_WBP_K2Node_ComponentBoundEvent_0_OnExit__DelegateSignature();
    void CloseMinigame();
    void SetupInteraction(bool HidePartOfUI);
    void PositionManagementCamera();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetupAsNonInteractable();
    void ExecuteUbergraph_WBP_FuelPriceBoardWidget(int32 EntryPoint);
}; // Size: 0x3B4

#endif
