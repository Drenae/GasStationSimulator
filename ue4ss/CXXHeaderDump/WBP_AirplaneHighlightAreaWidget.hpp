#ifndef UE4SS_SDK_WBP_AirplaneHighlightAreaWidget_HPP
#define UE4SS_SDK_WBP_AirplaneHighlightAreaWidget_HPP

class UWBP_AirplaneHighlightAreaWidget_C : public UAirplaneHighlightAreaWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x0268 (size: 0x8)
    class UWBP_KeyBindedAction_C* SHIFT_INTERACTION;                                  // 0x0270 (size: 0x8)
    bool ShowTutorialWidget;                                                          // 0x0278 (size: 0x1)

    void Construct();
    void Destruct();
    void KeyBindChanged(const FName ActionName);
    void KeyBindReset();
    void ForceShowTutorial();
    void ExecuteUbergraph_WBP_AirplaneHighlightAreaWidget(int32 EntryPoint);
}; // Size: 0x279

#endif
