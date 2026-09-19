#ifndef UE4SS_SDK_UGP_UI_HPP
#define UE4SS_SDK_UGP_UI_HPP

class UUGP_UI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class USpacer* ChangeKey_S;                                                       // 0x0268 (size: 0x8)
    class UHorizontalBox* ChangeKeyK_Bonus_HB;                                        // 0x0270 (size: 0x8)
    class UVerticalBox* ControllsHorizontal;                                          // 0x0278 (size: 0x8)
    class UWBP_KeyBindedAction_C* Interaction_F;                                      // 0x0280 (size: 0x8)
    class UImage* KeyBindIMG;                                                         // 0x0288 (size: 0x8)
    class UImage* KeyBindIMG_1;                                                       // 0x0290 (size: 0x8)
    class UImage* KeyBindIMG_2;                                                       // 0x0298 (size: 0x8)
    class UImage* KeyBindIMG_3;                                                       // 0x02A0 (size: 0x8)
    class UHorizontalBox* ToChangeChordGP_HB;                                         // 0x02A8 (size: 0x8)
    class UHorizontalBox* ToChangeChordK_HB;                                          // 0x02B0 (size: 0x8)
    class UHorizontalBox* ToChangeKeyGP_HB;                                           // 0x02B8 (size: 0x8)
    class UHorizontalBox* ToChangeKeyK_HB;                                            // 0x02C0 (size: 0x8)
    class UHorizontalBox* ToPlayGP_HB;                                                // 0x02C8 (size: 0x8)
    class UHorizontalBox* ToPlayK_HB;                                                 // 0x02D0 (size: 0x8)
    class UUGP_ChordWheel_C* UGP_ChordWheel;                                          // 0x02D8 (size: 0x8)

    void UpdateUIMode();
    void Construct();
    void OnKeybindReset();
    void ExecuteUbergraph_UGP_UI(int32 EntryPoint);
}; // Size: 0x2E0

#endif
