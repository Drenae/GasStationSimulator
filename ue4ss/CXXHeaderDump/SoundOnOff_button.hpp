#ifndef UE4SS_SDK_SoundOnOff_button_HPP
#define UE4SS_SDK_SoundOnOff_button_HPP

class USoundOnOff_button_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Hover;                                                    // 0x0268 (size: 0x8)
    class UButton* Button_53;                                                         // 0x0270 (size: 0x8)
    class UImage* Image_67;                                                           // 0x0278 (size: 0x8)
    class UImage* Image_149;                                                          // 0x0280 (size: 0x8)
    class UOverlay* Overlay_2;                                                        // 0x0288 (size: 0x8)
    class UTextBlock* TextBlock_130;                                                  // 0x0290 (size: 0x8)
    bool bIsSoundOn;                                                                  // 0x0298 (size: 0x1)
    class UAirportManager_C* AirportManagerREF;                                       // 0x02A0 (size: 0x8)
    class ABP_CommunicationDevice_C* CommunicationDevice;                             // 0x02A8 (size: 0x8)

    void SoundOff();
    void SoundOn();
    void Construct();
    void BndEvt__SoundOnOff_button_Button_53_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SoundOnOff_button_Button_53_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__SoundOnOff_button_Button_53_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void GamePadClickSound();
    void ExecuteUbergraph_SoundOnOff_button(int32 EntryPoint);
}; // Size: 0x2B0

#endif
