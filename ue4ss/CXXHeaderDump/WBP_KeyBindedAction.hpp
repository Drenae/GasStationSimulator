#ifndef UE4SS_SDK_WBP_KeyBindedAction_HPP
#define UE4SS_SDK_WBP_KeyBindedAction_HPP

class UWBP_KeyBindedAction_C : public UKeyBindedAction
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UTextBlock* BindedKeyTXT;                                                   // 0x0290 (size: 0x8)
    class UTextBlock* BindedKeyTXT_1;                                                 // 0x0298 (size: 0x8)
    class UTextBlock* BindedKeyTXT_2;                                                 // 0x02A0 (size: 0x8)
    class UImage* KeyBindIMG;                                                         // 0x02A8 (size: 0x8)
    class UHorizontalBox* KeyHorizontal_TXT;                                          // 0x02B0 (size: 0x8)
    FName SetKeyText;                                                                 // 0x02B8 (size: 0x8)
    bool IsHavingAxisScale_0;                                                         // 0x02C0 (size: 0x1)
    float AxisScale;                                                                  // 0x02C4 (size: 0x4)
    class AGSSPlayerCharacter* GSSCharREF;                                            // 0x02C8 (size: 0x8)
    FSlateColor KeyColor;                                                             // 0x02D0 (size: 0x28)

    void SetupKeyboardKey(FText InText);
    void SetupGamePadIMG(const FText& InText);
    void Construct();
    void CheckKeyInfo();
    void UpdateKeyInfo(FName ActionKeyName, float AxisScale);
    void CheckKeyInfo_CPP();
    void ExecuteUbergraph_WBP_KeyBindedAction(int32 EntryPoint);
}; // Size: 0x2F8

#endif
