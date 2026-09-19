#ifndef UE4SS_SDK_DecorationManagementContainer_WBP_HPP
#define UE4SS_SDK_DecorationManagementContainer_WBP_HPP

class UDecorationManagementContainer_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UHorizontalBox* GamePadHintHorizontal;                                      // 0x0268 (size: 0x8)
    class UImage* Image;                                                              // 0x0270 (size: 0x8)
    class UImage* Image_77;                                                           // 0x0278 (size: 0x8)
    class UImage* Image_82;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_199;                                                          // 0x0288 (size: 0x8)
    class UVerticalBox* MainVertical;                                                 // 0x0290 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_LeftShoulder;                                   // 0x0298 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Up_RightShoulder;                               // 0x02A0 (size: 0x8)
    class ADecorationCamera* DecorationCamera;                                        // 0x02A8 (size: 0x8)

    void HintsVisibility(bool Visible);
    void RefreshDecorationManagementTab(bool& bHasDecorations);
    void Construct();
    void CustomEvent_0();
    void Destruct();
    void ExecuteUbergraph_DecorationManagementContainer_WBP(int32 EntryPoint);
}; // Size: 0x2B0

#endif
