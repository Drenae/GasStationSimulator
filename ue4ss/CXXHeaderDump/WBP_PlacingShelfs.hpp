#ifndef UE4SS_SDK_WBP_PlacingShelfs_HPP
#define UE4SS_SDK_WBP_PlacingShelfs_HPP

class UWBP_PlacingShelfs_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* TutAnim;                                                  // 0x0268 (size: 0x8)
    class UVerticalBox* ControllsHorizontal;                                          // 0x0270 (size: 0x8)
    class UWBP_KeyBindedAction_C* E_ROTATE;                                           // 0x0278 (size: 0x8)
    class UWBP_KeyBindedAction_C* E_ROTATE_TUT;                                       // 0x0280 (size: 0x8)
    class UImage* LeftArrow;                                                          // 0x0288 (size: 0x8)
    class UOverlay* LeftArrowDescription;                                             // 0x0290 (size: 0x8)
    class UWBP_KeyBindedAction_C* LPM_INTERACTION;                                    // 0x0298 (size: 0x8)
    class UWBP_KeyBindedAction_C* Q_ROTATE;                                           // 0x02A0 (size: 0x8)
    class UWBP_KeyBindedAction_C* Q_ROTATE_TUT;                                       // 0x02A8 (size: 0x8)
    class UImage* RightArrow;                                                         // 0x02B0 (size: 0x8)
    class UOverlay* RightArrowDescription;                                            // 0x02B8 (size: 0x8)
    class UWBP_KeyBindedAction_C* RMB_INTERACTION;                                    // 0x02C0 (size: 0x8)
    class UWBP_KeyBindedAction_C* RMB_INTERACTION_1;                                  // 0x02C8 (size: 0x8)
    class UWBP_KeyBindedAction_C* WBP_KeyBindedAction;                                // 0x02D0 (size: 0x8)

    void KeybindingChanged(const FName ActionName);
    void KeybindingsReset();
    void Destruct();
    void Construct();
    void ExecuteUbergraph_WBP_PlacingShelfs(int32 EntryPoint);
}; // Size: 0x2D8

#endif
