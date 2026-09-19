#ifndef UE4SS_SDK_WBP_RedDot_HPP
#define UE4SS_SDK_WBP_RedDot_HPP

class UWBP_RedDot_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* ConstructAnimation;                                       // 0x0288 (size: 0x8)
    class UImage* BottomImg;                                                          // 0x0290 (size: 0x8)
    class UImage* TopImg;                                                             // 0x0298 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_WBP_RedDot(int32 EntryPoint);
}; // Size: 0x2A0

#endif
