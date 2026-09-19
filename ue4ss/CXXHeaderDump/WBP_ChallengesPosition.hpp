#ifndef UE4SS_SDK_WBP_ChallengesPosition_HPP
#define UE4SS_SDK_WBP_ChallengesPosition_HPP

class UWBP_ChallengesPosition_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* GreenAnim;                                                // 0x0268 (size: 0x8)
    class UWidgetAnimation* RedAnim;                                                  // 0x0270 (size: 0x8)
    class UTextBlock* AmountTXT;                                                      // 0x0278 (size: 0x8)
    class UImage* CheckBoxDone;                                                       // 0x0280 (size: 0x8)
    class UOverlay* CheckOverlay;                                                     // 0x0288 (size: 0x8)
    class UImage* Image_88;                                                           // 0x0290 (size: 0x8)
    class UTextBlock* Objective_TXT;                                                  // 0x0298 (size: 0x8)
    FText SetObjectiveTXT;                                                            // 0x02A0 (size: 0x18)
    bool MoneyIncluded;                                                               // 0x02B8 (size: 0x1)
    float CurrentAmount;                                                              // 0x02BC (size: 0x4)
    float MaxAmount;                                                                  // 0x02C0 (size: 0x4)
    EGSS_Stat ChallengeSubtype;                                                       // 0x02C4 (size: 0x1)
    bool CreatedForPC;                                                                // 0x02C5 (size: 0x1)
    bool bPartDone;                                                                   // 0x02C6 (size: 0x1)

    void Construct();
    void UpdateValue(float CurrentAmount, bool IsPartDone);
    void PlayRedAnim();
    void PlayGreenAnim();
    void ExecuteUbergraph_WBP_ChallengesPosition(int32 EntryPoint);
}; // Size: 0x2C7

#endif
