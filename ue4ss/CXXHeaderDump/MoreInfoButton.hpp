#ifndef UE4SS_SDK_MoreInfoButton_HPP
#define UE4SS_SDK_MoreInfoButton_HPP

class UMoreInfoButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Hover;                                                    // 0x0268 (size: 0x8)
    class UCircle_WBP_C* Circle_WBP;                                                  // 0x0270 (size: 0x8)
    class UDragoButton* DragoButton_39;                                               // 0x0278 (size: 0x8)
    class UImage* Image_65;                                                           // 0x0280 (size: 0x8)
    FMoreInfoButton_CClickEvent ClickEvent;                                           // 0x0288 (size: 0x10)
    void ClickEvent();

    void BndEvt__MoreInfoButton_DragoButton_39_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MoreInfoButton_DragoButton_39_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MoreInfoButton_DragoButton_39_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_MoreInfoButton(int32 EntryPoint);
    void ClickEvent__DelegateSignature();
}; // Size: 0x298

#endif
