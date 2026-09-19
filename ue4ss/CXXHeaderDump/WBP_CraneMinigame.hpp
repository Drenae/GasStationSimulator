#ifndef UE4SS_SDK_WBP_CraneMinigame_HPP
#define UE4SS_SDK_WBP_CraneMinigame_HPP

class UWBP_CraneMinigame_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UVerticalBox* ControllsMagnetMode;                                          // 0x0268 (size: 0x8)
    class UWBP_KeyBindedAction_C* CraneChangeCamera;                                  // 0x0270 (size: 0x8)
    class UWBP_KeyBindedAction_C* CraneResetWrecks;                                   // 0x0278 (size: 0x8)
    class UWBP_KeyBindedAction_C* Interaction_F;                                      // 0x0280 (size: 0x8)
    class UWBP_KeyBindedAction_C* ShowHideHighlights;                                 // 0x0288 (size: 0x8)
    class UWBP_KeyBindedAction_C* ShowHideTooltips;                                   // 0x0290 (size: 0x8)

    void Construct();
    void KeyBindChanged(const FName ActionName);
    void KeyBindReset();
    void Destruct();
    void ExecuteUbergraph_WBP_CraneMinigame(int32 EntryPoint);
}; // Size: 0x298

#endif
