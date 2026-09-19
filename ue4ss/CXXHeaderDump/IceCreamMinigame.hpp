#ifndef UE4SS_SDK_IceCreamMinigame_HPP
#define UE4SS_SDK_IceCreamMinigame_HPP

class UIceCreamMinigame_C : public UGSSWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class USpacer* Action7_S;                                                         // 0x0270 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0278 (size: 0x8)
    class UVerticalBox* ControllsHorizontal;                                          // 0x0280 (size: 0x8)
    class UOverlay* IcecreamNavigation_OnlyPad;                                       // 0x0288 (size: 0x8)
    class UIceCreamOrder_WBP_C* IceCreamOrder_WBP;                                    // 0x0290 (size: 0x8)
    class UWBP_KeyBindedAction_C* Interaction_F;                                      // 0x0298 (size: 0x8)
    class UWBP_KeyBindedAction_C* LPM_Key;                                            // 0x02A0 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x02A8 (size: 0x8)
    class UWBP_KeyBindedAction_C* MinigameSpecial_01;                                 // 0x02B0 (size: 0x8)
    class USpacer* Nav_S;                                                             // 0x02B8 (size: 0x8)
    class UWBP_KeyBindedAction_C* NavDown_Key;                                        // 0x02C0 (size: 0x8)
    class UWBP_KeyBindedAction_C* NavLeft_Key;                                        // 0x02C8 (size: 0x8)
    class UWBP_KeyBindedAction_C* NavRight_Key;                                       // 0x02D0 (size: 0x8)
    class UWBP_KeyBindedAction_C* NavUp_Key;                                          // 0x02D8 (size: 0x8)
    class UWBP_KeyBindedAction_C* RPM_Key;                                            // 0x02E0 (size: 0x8)
    class AAICharacterBase* AICharacter;                                              // 0x02E8 (size: 0x8)
    class UUserWidget* InfoWidget;                                                    // 0x02F0 (size: 0x8)
    class AGSSPlayerCharacter* PlayerCharacter;                                       // 0x02F8 (size: 0x8)
    class UWBP_CursorWidgetHand_C* CursorWidget;                                      // 0x0300 (size: 0x8)

    void SetCursorVisibility(bool NewVisiblity);
    void SetCustomCursor();
    void OnKeybindingChanged_F(FName InputName);
    void Construct();
    void CustomEvent_0(const FName ActionName);
    void OnKeybindReset();
    void OnGamepadModeToggled(bool bNewGamepadMode);
    void Destruct();
    void ExecuteUbergraph_IceCreamMinigame(int32 EntryPoint);
}; // Size: 0x308

#endif
