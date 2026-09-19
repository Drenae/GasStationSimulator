#ifndef UE4SS_SDK_LotteryPrize_WBP_HPP
#define UE4SS_SDK_LotteryPrize_WBP_HPP

class ULotteryPrize_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* Prize_headline;                                                 // 0x0268 (size: 0x8)
    class UTextBlock* TimerText;                                                      // 0x0270 (size: 0x8)
    class ALotteryMachine_BP_C* LotteryMachine;                                       // 0x0278 (size: 0x8)

    void UpdatePrizeStateAfterLoad(bool GameLoaded);
    void InitializeMachine();
    void SetPrizeText();
    void ClearPrizeText();
    void ExecuteUbergraph_LotteryPrize_WBP(int32 EntryPoint);
}; // Size: 0x280

#endif
