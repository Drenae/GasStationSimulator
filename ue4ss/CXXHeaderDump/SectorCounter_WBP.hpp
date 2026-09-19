#ifndef UE4SS_SDK_SectorCounter_WBP_HPP
#define UE4SS_SDK_SectorCounter_WBP_HPP

class USectorCounter_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* HoverAnimation;                                           // 0x0268 (size: 0x8)
    class UButton* ActionButtonTest;                                                  // 0x0270 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_97;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_locked;                                                       // 0x0288 (size: 0x8)
    class UOverlay* Overlay_owned;                                                    // 0x0290 (size: 0x8)
    bool IsCurrentSecotr;                                                             // 0x0298 (size: 0x1)
    bool IsBlockedByLVL;                                                              // 0x0299 (size: 0x1)
    int32 Index;                                                                      // 0x029C (size: 0x4)
    FSectorCounter_WBP_COnCapClicked OnCapClicked;                                    // 0x02A0 (size: 0x10)
    void OnCapClicked(int32 Index);

    void Construct();
    void BndEvt__SectorCounter_WBP_ActionButtonTest_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__SectorCounter_WBP_ActionButtonTest_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__SectorCounter_WBP_ActionButtonTest_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Destruct();
    void ExecuteUbergraph_SectorCounter_WBP(int32 EntryPoint);
    void OnCapClicked__DelegateSignature(int32 Index);
}; // Size: 0x2B0

#endif
