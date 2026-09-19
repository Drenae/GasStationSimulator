#ifndef UE4SS_SDK_WBP_TimerParent_HPP
#define UE4SS_SDK_WBP_TimerParent_HPP

class UWBP_TimerParent_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)

    void Construct();
    void onchanged();
    void ExecuteUbergraph_WBP_TimerParent(int32 EntryPoint);
}; // Size: 0x288

#endif
