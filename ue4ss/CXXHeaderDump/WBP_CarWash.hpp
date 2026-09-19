#ifndef UE4SS_SDK_WBP_CarWash_HPP
#define UE4SS_SDK_WBP_CarWash_HPP

class UWBP_CarWash_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UVerticalBox* ControllsHorizontal;                                          // 0x0268 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x0270 (size: 0x8)
    class UWBP_KeyBindedAction_C* LMB_Clean;                                          // 0x0278 (size: 0x8)
    class UWBP_KeyBindedAction_C* LSHIFT_SeeDirt;                                     // 0x0280 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x0288 (size: 0x8)
    class UTextBlock* PrefixTXT;                                                      // 0x0290 (size: 0x8)
    class UWBP_KeyBindedAction_C* RMB_ChangeCap;                                      // 0x0298 (size: 0x8)
    class UOverlay* ScrollingGamePad;                                                 // 0x02A0 (size: 0x8)
    class UOverlay* ScrollingKeyBoard;                                                // 0x02A8 (size: 0x8)
    class UWBP_KeyBindedAction_C* ZOOM_ChangeCap;                                     // 0x02B0 (size: 0x8)
    class UWBP_KeyBindedAction_C* ZOOM_ChangeCap_1;                                   // 0x02B8 (size: 0x8)
    class UWBP_KeyBindedAction_C* ZOOM_ChangeCap_2;                                   // 0x02C0 (size: 0x8)
    class ACarWashPistol* PistolRef;                                                  // 0x02C8 (size: 0x8)

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnKeyChanged(const FName ActionName);
    void OnKeyReset();
    void Construct();
    void Destruct();
    void OnTab();
    void ExecuteUbergraph_WBP_CarWash(int32 EntryPoint);
}; // Size: 0x2D0

#endif
