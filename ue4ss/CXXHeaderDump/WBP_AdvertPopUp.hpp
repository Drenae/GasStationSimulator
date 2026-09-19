#ifndef UE4SS_SDK_WBP_AdvertPopUp_HPP
#define UE4SS_SDK_WBP_AdvertPopUp_HPP

class UWBP_AdvertPopUp_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UDragoButton* ActionButton;                                                 // 0x0608 (size: 0x8)
    class UTextBlock* AdvButtonText;                                                  // 0x0610 (size: 0x8)
    class UImage* AdvertBackgroundImage;                                              // 0x0618 (size: 0x8)
    class UImage* AdvertImage;                                                        // 0x0620 (size: 0x8)
    class UImage* AdvertMask;                                                         // 0x0628 (size: 0x8)
    class UOverlay* BackButtonOverlay;                                                // 0x0630 (size: 0x8)
    class UImage* Image_73;                                                           // 0x0638 (size: 0x8)
    class UImage* Image_99;                                                           // 0x0640 (size: 0x8)
    class UImage* Image_155;                                                          // 0x0648 (size: 0x8)
    class UImage* Image_logo;                                                         // 0x0650 (size: 0x8)
    class UNiagaraSystemWidget* NiagaraWidget;                                        // 0x0658 (size: 0x8)
    class UDragoButton* PayBackButton;                                                // 0x0660 (size: 0x8)
    class UPC_PS4_bindings_C* PC_PS4_bindings_Save;                                   // 0x0668 (size: 0x8)
    class URetainerBox* RetainerBox_1;                                                // 0x0670 (size: 0x8)
    FString AdvertButtonText;                                                         // 0x0678 (size: 0x10)
    class UTexture2D* AdvertBackgroundTexture;                                        // 0x0688 (size: 0x8)
    class UTexture2D* AdvertIconImageTexture;                                         // 0x0690 (size: 0x8)
    class UTexture2D* AdvertIconMaskTexture;                                          // 0x0698 (size: 0x8)
    class UTexture2D* NiagaraSpriteMaskTexture;                                       // 0x06A0 (size: 0x8)
    bool IsNiagaraEnabled;                                                            // 0x06A8 (size: 0x1)
    FColor NiagaraColor1;                                                             // 0x06AC (size: 0x4)
    FColor NiagaraColor2;                                                             // 0x06B0 (size: 0x4)
    FString AdvertisementURL;                                                         // 0x06B8 (size: 0x10)
    class UMaterialInstance* DynamicNiagaraMaterial;                                  // 0x06C8 (size: 0x8)
    int32 ButtonIndex;                                                                // 0x06D0 (size: 0x4)
    FTimerHandle BlockTimer;                                                          // 0x06D8 (size: 0x8)

    void SetupNiagara();
    void SetupVisuals();
    void Construct();
    void BndEvt__FTR_Widget_DragoButton_64_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__FTR_Widget_DragoButton_64_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void OnPressedUp();
    void OnPressedDown();
    void HooverActionButton();
    void UnhoverActionButton();
    void OnPressedBack();
    void OnPressedSelect();
    void BndEvt__WBP_AdvertPopUp_ActionButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void OnChangeInputDeviceMenuUI(bool bIsGamepadBeingUsed);
    void BndEvt__WBP_AdvertPopUp_PayBackButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_AdvertPopUp(int32 EntryPoint);
}; // Size: 0x6E0

#endif
