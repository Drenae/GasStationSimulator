#ifndef UE4SS_SDK_WBP_ChallengesHolder_HPP
#define UE4SS_SDK_WBP_ChallengesHolder_HPP

class UWBP_ChallengesHolder_C : public UWBP_ChallangeMaster_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    class UVerticalBox* ChallengelPositionsHolder;                                    // 0x0368 (size: 0x8)
    class UImage* HandGold_Image;                                                     // 0x0370 (size: 0x8)
    class UImage* Image_124;                                                          // 0x0378 (size: 0x8)
    class UImage* Image_311;                                                          // 0x0380 (size: 0x8)
    class UImage* Image_313;                                                          // 0x0388 (size: 0x8)
    class UImage* Image_385;                                                          // 0x0390 (size: 0x8)
    class UImage* Image_479;                                                          // 0x0398 (size: 0x8)
    class UOverlay* PopularityRewardOverlay;                                          // 0x03A0 (size: 0x8)
    class UTextBlock* RewardTextChild;                                                // 0x03A8 (size: 0x8)
    class UTextBlock* TimeTextChild;                                                  // 0x03B0 (size: 0x8)
    class UImage* VolcanoGold_Image;                                                  // 0x03B8 (size: 0x8)
    class UModular_Quest_C* SpawnedQuest_0;                                           // 0x03C0 (size: 0x8)
    TMap<UGSSQuest*, UUserWidget*> Quest_0;                                           // 0x03C8 (size: 0x50)
    TArray<UWBP_ChallengesPosition_C*> ChallengeSubwidgets_0;                         // 0x0418 (size: 0x10)

    void SetVisiblityCUstom(ESlateVisibility Vis);
    void UpdateTimer();
    void UpdateAfterGameChallenge();
    void Construct();
    void ExecuteUbergraph_WBP_ChallengesHolder(int32 EntryPoint);
}; // Size: 0x428

#endif
