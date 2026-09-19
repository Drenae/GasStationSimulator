#ifndef UE4SS_SDK_WBP_Grinder_HPP
#define UE4SS_SDK_WBP_Grinder_HPP

class UWBP_Grinder_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UVerticalBox* ControllsHorizontal;                                          // 0x0268 (size: 0x8)
    class UWBP_KeyBindedAction_C* LMB_Clean;                                          // 0x0270 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x0278 (size: 0x8)
    class APressureWasher* GrinderRef;                                                // 0x0280 (size: 0x8)

    void OnKeyChanged(const FName ActionName);
    void OnKeyReset();
    void Construct();
    void Destruct();
    void OnTab();
    void ExecuteUbergraph_WBP_Grinder(int32 EntryPoint);
}; // Size: 0x288

#endif
