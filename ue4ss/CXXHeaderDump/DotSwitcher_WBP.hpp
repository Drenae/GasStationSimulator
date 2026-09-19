#ifndef UE4SS_SDK_DotSwitcher_WBP_HPP
#define UE4SS_SDK_DotSwitcher_WBP_HPP

class UDotSwitcher_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_55;                                                         // 0x0268 (size: 0x8)
    class UImage* Image_active;                                                       // 0x0270 (size: 0x8)
    class UImage* Image_normal;                                                       // 0x0278 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0280 (size: 0x8)
    FDotSwitcher_WBP_CClick Click;                                                    // 0x0288 (size: 0x10)
    void Click();
    class UWBP_Newsfeed_C* Newsfeed;                                                  // 0x0298 (size: 0x8)
    int32 Index;                                                                      // 0x02A0 (size: 0x4)

    void SetNormal();
    void SetActive();
    void Construct();
    void BndEvt__DotSwitcher_WBP_Button_55_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void ChangeNews();
    void ExecuteUbergraph_DotSwitcher_WBP(int32 EntryPoint);
    void Click__DelegateSignature();
}; // Size: 0x2A4

#endif
