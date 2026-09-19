#ifndef UE4SS_SDK_PC_Managment_HPP
#define UE4SS_SDK_PC_Managment_HPP

class UPC_Managment_C : public UPcBaseTab
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UCanvasPanel* CanvasPanel_19;                                               // 0x0298 (size: 0x8)
    class UGSSButton* GSSButton_83;                                                   // 0x02A0 (size: 0x8)
    class UImage* Image;                                                              // 0x02A8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_308;                                                          // 0x02B8 (size: 0x8)
    class UTextBlock* MoreInfoWerehouseTXT_1;                                         // 0x02C0 (size: 0x8)
    class UOverlay* Overlay_45;                                                       // 0x02C8 (size: 0x8)
    class UOverlay* Overlay_Info;                                                     // 0x02D0 (size: 0x8)
    class UPC_OpenCloseDLC_C* PC_OpenCloseDLC_Airstrip;                               // 0x02D8 (size: 0x8)
    class UPC_OpenCloseDLC_C* PC_OpenCloseDLC_CarJunkyard;                            // 0x02E0 (size: 0x8)
    class UPC_OpenCloseDLC_C* PC_OpenCloseDLC_RV;                                     // 0x02E8 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x02F0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightButton;                                    // 0x02F8 (size: 0x8)
    TArray<UUserWidget*> Created;                                                     // 0x0300 (size: 0x10)
    FVector2D LastSize;                                                               // 0x0310 (size: 0x8)
    TArray<UPC_OpenCloseSection_WBP_C*> CreatedSections;                              // 0x0318 (size: 0x10)
    bool CreateNewWidgets;                                                            // 0x0328 (size: 0x1)
    int32 GamePadSectionIndex;                                                        // 0x032C (size: 0x4)
    TMap<int32, UPC_OpenCloseSection_WBP_C*> IndexToCreatedSection;                   // 0x0330 (size: 0x50)
    class UPC_ManagmentHiddenWidget_C* HiddenWidget;                                  // 0x0380 (size: 0x8)
    class ADecorationCamera* ManagementCamera;                                        // 0x0388 (size: 0x8)
    FVector StartingCameraLocation;                                                   // 0x0390 (size: 0xC)
    bool IsTidalWave;                                                                 // 0x039C (size: 0x1)

    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void HintsVisibility(bool Visible);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FVector2D ProjectWorldToScreen(FVector ViewLocation, FRotator ViewRotation, float ViewPov, FVector WorldLocation);
    void TopMenuHandle(FKeyEvent KeyEvent);
    void Construct();
    void CustomEscape();
    void BndEvt__PC_Managment_GSSButton_83_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void RefreshCamera();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void GamePadExit();
    void CustomEvent_0();
    void Destruct();
    void OnTabChangedToAnother();
    void PositionManagementCamera();
    void OnDeviceChanged(bool bNewGamepadMode);
    void BindOnDeviceChanged(bool isConstruct);
    void ExecuteUbergraph_PC_Managment(int32 EntryPoint);
}; // Size: 0x39D

#endif
