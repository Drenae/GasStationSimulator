#ifndef UE4SS_SDK_WBP_Lighter_HPP
#define UE4SS_SDK_WBP_Lighter_HPP

class UWBP_Lighter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* TooFast;                                                  // 0x0268 (size: 0x8)
    class UVerticalBox* ControllsHorizontal;                                          // 0x0270 (size: 0x8)
    class UImage* Image_67;                                                           // 0x0278 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x0280 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x0288 (size: 0x8)
    class UProgressBar* ProgressBar_0;                                                // 0x0290 (size: 0x8)
    class UWBP_KeyBindedAction_C* RMB_Right;                                          // 0x0298 (size: 0x8)
    class ABP_Lighter_C* LighterRef;                                                  // 0x02A0 (size: 0x8)

    ESlateVisibility GetVisibility_0();
    void OnKeyChanged(const FName ActionName);
    void OnKeyReset();
    void Construct();
    void Destruct();
    void OnTab();
    void ExecuteUbergraph_WBP_Lighter(int32 EntryPoint);
}; // Size: 0x2A8

#endif
