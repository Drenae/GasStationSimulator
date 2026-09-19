#ifndef UE4SS_SDK_PlatformPanelCarPart_HPP
#define UE4SS_SDK_PlatformPanelCarPart_HPP

class UPlatformPanelCarPart_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ClickAnim;                                                // 0x0268 (size: 0x8)
    class UWidgetAnimation* HoverAnim;                                                // 0x0270 (size: 0x8)
    class UImage* CarPart_BG_IMG;                                                     // 0x0278 (size: 0x8)
    class UImage* CarPart_BG_IMG_1;                                                   // 0x0280 (size: 0x8)
    class UImage* Image_54;                                                           // 0x0288 (size: 0x8)
    class UImage* Image_dirty;                                                        // 0x0290 (size: 0x8)
    class UImage* Image_wrench;                                                       // 0x0298 (size: 0x8)
    class UOverlay* Main_Overlay;                                                     // 0x02A0 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x02A8 (size: 0x8)
    class UGSSButton* PartButton;                                                     // 0x02B0 (size: 0x8)
    class UPlatformCarStatsSmall_C* PlatformCarStatsSmall_acceleration;               // 0x02B8 (size: 0x8)
    class UPlatformCarStatsSmall_C* PlatformCarStatsSmall_handling;                   // 0x02C0 (size: 0x8)
    class UPlatformCarStatsSmall_C* PlatformCarStatsSmall_speed;                      // 0x02C8 (size: 0x8)
    class UPlatformCarStatsSmall_C* PlatformCarStatsSmall_strenght;                   // 0x02D0 (size: 0x8)
    class UOverlay* Stats_Overlay;                                                    // 0x02D8 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x02E0 (size: 0x8)
    class UGSSButton* VariantSelectButton1;                                           // 0x02E8 (size: 0x8)
    class UGSSButton* VariantSelectButton2;                                           // 0x02F0 (size: 0x8)
    class UGSSButton* VariantSelectButton3;                                           // 0x02F8 (size: 0x8)
    class UOverlay* WheelSizeOverlay;                                                 // 0x0300 (size: 0x8)
    FPlatformPanelCarPart_COnHover OnHover;                                           // 0x0308 (size: 0x10)
    void OnHover(bool bShow, EJunkyardCarPartType TargetSlot, FStorageCarPart PartToAddData, class UPlatformPanelCarPart_C* PartButton);
    FPlatformPanelCarPart_COnPressed OnPressed;                                       // 0x0318 (size: 0x10)
    void OnPressed(FStorageCarPart PartToAddData, EJunkyardCarPartType TargetSlot, class UPlatformPanelCarPart_C* CarPartWidget, bool bRemove);
    FStorageCarPart StoragePartData;                                                  // 0x0328 (size: 0xE0)
    EJunkyardCarPartType PartSlot;                                                    // 0x0408 (size: 0x1)
    bool IsInstalled;                                                                 // 0x0409 (size: 0x1)
    bool bFitsCar;                                                                    // 0x040A (size: 0x1)
    bool bGhost;                                                                      // 0x040B (size: 0x1)
    bool bDirty;                                                                      // 0x040C (size: 0x1)
    TArray<UGSSButton*> RIms;                                                         // 0x0410 (size: 0x10)
    bool bVariantChanged;                                                             // 0x0420 (size: 0x1)

    void SetActiveRimSize(int32 VariantIndex);
    void SetNotInstalled();
    void SetInstalled();
    void SetPartStats();
    void OnLoaded_2C9CF8434380F1F6C49E32B54C6F866A(class UObject* Loaded);
    void OnLoaded_4626ED9845B74C37023292A3F85792B7(class UObject* Loaded);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void Construct();
    void Destruct();
    void BndEvt__PlatformPanelCarPart_PartButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__PlatformPanelCarPart_PartButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__PlatformPanelCarPart_PartButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void SelectWheelSizeVariant(int32 VariantIndex, bool TransformPart);
    void BndEvt__PlatformPanelCarPart_VariantSelectButton1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__PlatformPanelCarPart_VariantSelectButton2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__PlatformPanelCarPart_VariantSelectButton3_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void UpdateTextAndIcon();
    void GamePadHover(bool Hover);
    void GamePadClickPart();
    void GamePadOnMouseEnterLeave(bool Enter);
    void GamePadNavigateWheelSize(int32 ButtonIndex, bool Hover);
    void GamePadClickWheelButton(int32 Index);
    void ExecuteUbergraph_PlatformPanelCarPart(int32 EntryPoint);
    void OnPressed__DelegateSignature(FStorageCarPart PartToAddData, EJunkyardCarPartType TargetSlot, class UPlatformPanelCarPart_C* CarPartWidget, bool bRemove);
    void OnHover__DelegateSignature(bool bShow, EJunkyardCarPartType TargetSlot, FStorageCarPart PartToAddData, class UPlatformPanelCarPart_C* PartButton);
}; // Size: 0x421

#endif
