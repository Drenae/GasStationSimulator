#ifndef UE4SS_SDK_WBP_PlacingDecorations_HPP
#define UE4SS_SDK_WBP_PlacingDecorations_HPP

class UWBP_PlacingDecorations_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UVerticalBox* ControllsHorizontal;                                          // 0x0268 (size: 0x8)
    class UWBP_KeyBindedAction_C* E_ROTATE;                                           // 0x0270 (size: 0x8)
    class UWBP_KeyBindedAction_C* LPM_INTERACTION;                                    // 0x0278 (size: 0x8)
    class UWBP_KeyBindedAction_C* Q_ROTATE;                                           // 0x0280 (size: 0x8)
    class UWBP_KeyBindedAction_C* RMB_INTERACTION;                                    // 0x0288 (size: 0x8)
    class UWBP_KeyBindedAction_C* SHIFT_INTERACTION_1;                                // 0x0290 (size: 0x8)
    class UWBP_KeyBindedAction_C* WBP_KeyBindedAction;                                // 0x0298 (size: 0x8)

    void Construct();
    void Destruct();
    void KeybindingChanged(const FName ActionName);
    void KeybindingReset();
    void ExecuteUbergraph_WBP_PlacingDecorations(int32 EntryPoint);
}; // Size: 0x2A0

#endif
