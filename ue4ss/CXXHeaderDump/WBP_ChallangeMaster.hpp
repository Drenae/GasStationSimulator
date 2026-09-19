#ifndef UE4SS_SDK_WBP_ChallangeMaster_HPP
#define UE4SS_SDK_WBP_ChallangeMaster_HPP

class UWBP_ChallangeMaster_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeAfterQuest;                                           // 0x0268 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0270 (size: 0x8)
    class UModular_Quest_C* SpawnedQuest;                                             // 0x0278 (size: 0x8)
    TMap<UGSSQuest*, UUserWidget*> Quest;                                             // 0x0280 (size: 0x50)
    FText ActiveText;                                                                 // 0x02D0 (size: 0x18)
    TArray<UWBP_ChallengesPosition_C*> ChallengeSubwidgets;                           // 0x02E8 (size: 0x10)
    class UVerticalBox* ChallengeVertical;                                            // 0x02F8 (size: 0x8)
    bool IsCreatedForPC;                                                              // 0x0300 (size: 0x1)
    class UWBP_ChallengesPosition_C* MoneyPositionREF;                                // 0x0308 (size: 0x8)
    TArray<FQuestChallenge> QuestChallengeGroup;                                      // 0x0310 (size: 0x10)
    class UVerticalBox* TimeHolder;                                                   // 0x0320 (size: 0x8)
    FText TimeText;                                                                   // 0x0328 (size: 0x18)
    FText RewardText;                                                                 // 0x0340 (size: 0x18)
    bool IsAfterGameChallenge;                                                        // 0x0358 (size: 0x1)
    bool NoTimer;                                                                     // 0x0359 (size: 0x1)

    void SetVisiblityCUstom(ESlateVisibility Vis);
    void UpdateTimer();
    void TimerCalculation(float TimeLeft);
    void UpdateAfterGameChallenge();
    void GetChallengeWidgetToUpdate(EGSS_Stat Type, class UWBP_ChallengesPosition_C*& FoundWidget);
    void Construct();
    void Challange Started(class UGSSQuest* QuestRef);
    void ObjectiveUpdated(EGSS_Stat ChallengeType, int32 NewAmount, bool IsPartDone);
    void Challenge Completed(class UGSSQuest* QuestRef);
    void PostGameChallengeStarted(FQuestChallenge ChallengeInfo);
    void PostGameChallengeCompleted(bool bSuccess, int32 HappyAward);
    void PostGameChallengeTimerUpdate(float TimeLeft);
    void ObjectiveChallengeCompleted_Event_0(class UChallengeObjective* Objective);
    void ObjectiveChallengeStarted(class UChallengeObjective* Objective);
    void ExecuteUbergraph_WBP_ChallangeMaster(int32 EntryPoint);
}; // Size: 0x35A

#endif
