#ifndef UE4SS_SDK_WBP_ScoreBoard_HPP
#define UE4SS_SDK_WBP_ScoreBoard_HPP

class UWBP_ScoreBoard_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_65;                                                           // 0x0268 (size: 0x8)
    class UTextBlock* Place_txt;                                                      // 0x0270 (size: 0x8)
    class UTextBlock* PlayerName_TXT;                                                 // 0x0278 (size: 0x8)
    class UTextBlock* Score;                                                          // 0x0280 (size: 0x8)
    FText SetPlayerName;                                                              // 0x0288 (size: 0x18)
    FText SetPlace;                                                                   // 0x02A0 (size: 0x18)
    EMinigame ScoreType;                                                              // 0x02B8 (size: 0x1)
    int32 ScoreValue;                                                                 // 0x02BC (size: 0x4)
    bool SingleScoreSpot;                                                             // 0x02C0 (size: 0x1)

    void Construct();
    void GamePadHover(bool Hover);
    void ExecuteUbergraph_WBP_ScoreBoard(int32 EntryPoint);
}; // Size: 0x2C1

#endif
