#ifndef UE4SS_SDK_WBP_ServiceChooseDifficulty_HPP
#define UE4SS_SDK_WBP_ServiceChooseDifficulty_HPP

class UWBP_ServiceChooseDifficulty_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UImage* Backgound;                                                          // 0x0288 (size: 0x8)
    class UWBP_ServiceDifficultyButton_C* Button_Easy;                                // 0x0290 (size: 0x8)
    class UWBP_ServiceDifficultyButton_C* Button_Hard;                                // 0x0298 (size: 0x8)
    class UWBP_ServiceDifficultyButton_C* Button_Normal;                              // 0x02A0 (size: 0x8)
    class UImage* Image_bg;                                                           // 0x02A8 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x02B0 (size: 0x8)
    FWBP_ServiceChooseDifficulty_COnChosenDifficulty OnChosenDifficulty;              // 0x02B8 (size: 0x10)
    void OnChosenDifficulty(EGuestServiceDifficulty Difficulty);
    FGameplayTag Guest Service Tag;                                                   // 0x02C8 (size: 0x8)
    class UWBP_ServiceDifficultyButton_C* Current Button;                             // 0x02D0 (size: 0x8)
    bool IsUsingGamepad;                                                              // 0x02D8 (size: 0x1)
    TArray<UWBP_ServiceDifficultyButton_C*> DifficultyButtons;                        // 0x02E0 (size: 0x10)

    void Fill Tutorial Info();
    void SetupDifficultyVizualsAllButtons();
    void Get Relative Button In Direction(bool Forward, class UWBP_ServiceDifficultyButton_C*& Button);
    void HooverCurrentButton();
    void UnhooverCurrentButton();
    void ChangeInputDevice(bool IsGamepad);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Choose Difficulty(EGuestServiceDifficulty Difficulty);
    void Init(FGameplayTag Tag, TArray<EGuestServiceDifficulty>& AvailableDifficulties);
    void Construct();
    void On Difficulty Clicked(class UWBP_ServiceDifficultyButton_C* Difficulty Button);
    void OnInitialized();
    void OnDefaultEscape();
    void GamePadEscape();
    void ExecuteUbergraph_WBP_ServiceChooseDifficulty(int32 EntryPoint);
    void OnChosenDifficulty__DelegateSignature(EGuestServiceDifficulty Difficulty);
}; // Size: 0x2F0

#endif
