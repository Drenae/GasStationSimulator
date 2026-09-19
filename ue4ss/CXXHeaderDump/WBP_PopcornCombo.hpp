#ifndef UE4SS_SDK_WBP_PopcornCombo_HPP
#define UE4SS_SDK_WBP_PopcornCombo_HPP

class UWBP_PopcornCombo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* CurrentComboTextValue;                                          // 0x0268 (size: 0x8)
    class UTextBlock* HighScoreTextValue;                                             // 0x0270 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x0278 (size: 0x8)
    class UTextBlock* RenownMultiplierValue;                                          // 0x0280 (size: 0x8)

    void Refresh();
    void Construct();
    void OnNewDirty(float NewDirty);
    void ExecuteUbergraph_WBP_PopcornCombo(int32 EntryPoint);
}; // Size: 0x288

#endif
