#ifndef UE4SS_SDK_WBP_CraneBindedAction_HPP
#define UE4SS_SDK_WBP_CraneBindedAction_HPP

class UWBP_CraneBindedAction_C : public UKeyBindedAction
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UTextBlock* BindedKeyTXT;                                                   // 0x0290 (size: 0x8)
    class UImage* KeyBindIMG;                                                         // 0x0298 (size: 0x8)
    class UHorizontalBox* KeyHorizontal_TXT;                                          // 0x02A0 (size: 0x8)
    FName SetKeyText;                                                                 // 0x02A8 (size: 0x8)
    bool IsHavingAxisScale_0;                                                         // 0x02B0 (size: 0x1)
    float AxisScale;                                                                  // 0x02B4 (size: 0x4)
    class AGSSPlayerCharacter* GSSCharREF;                                            // 0x02B8 (size: 0x8)
    bool NewVar_0;                                                                    // 0x02C0 (size: 0x1)
    int32 FontSize;                                                                   // 0x02C4 (size: 0x4)
    float ImageSize;                                                                  // 0x02C8 (size: 0x4)
    FVector2D TextRenderTranslation;                                                  // 0x02CC (size: 0x8)

    void SetupKeyboardKey(FText InText);
    void SetupGamePadIMG(const FText& InText);
    void Construct();
    void CheckKeyInfo();
    void UpdateKeyInfo(FName ActionKeyName, float AxisScale);
    void CheckKeyInfo_CPP();
    void KeyBindChanged(const FName ActionName);
    void Destruct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_CraneBindedAction(int32 EntryPoint);
}; // Size: 0x2D4

#endif
