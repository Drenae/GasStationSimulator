#ifndef UE4SS_SDK_Event_Challenge_Complited_HPP
#define UE4SS_SDK_Event_Challenge_Complited_HPP

class UEvent_Challenge_Complited_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* WaitingAnim;                                              // 0x0268 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0270 (size: 0x8)
    class UTextBlock* Description_TXT;                                                // 0x0278 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0280 (size: 0x8)
    class UImage* Image_347;                                                          // 0x0288 (size: 0x8)
    class UOverlay* MoneyReward;                                                      // 0x0290 (size: 0x8)
    class UOverlay* PopularityReward;                                                 // 0x0298 (size: 0x8)
    class UTextBlock* RewardMoneyAmount;                                              // 0x02A0 (size: 0x8)
    class UTextBlock* RewardTextPopularity;                                           // 0x02A8 (size: 0x8)
    class UTextBlock* TitleTXT;                                                       // 0x02B0 (size: 0x8)
    bool IsChallenge;                                                                 // 0x02B8 (size: 0x1)
    float RewardAmountPopularity;                                                     // 0x02BC (size: 0x4)
    float RewardAmountMoney;                                                          // 0x02C0 (size: 0x4)
    bool IncludedMoney;                                                               // 0x02C4 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_Event_Challenge_Complited(int32 EntryPoint);
}; // Size: 0x2C5

#endif
