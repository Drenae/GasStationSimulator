#ifndef UE4SS_SDK_WBP_QuestHolder_HPP
#define UE4SS_SDK_WBP_QuestHolder_HPP

class UWBP_QuestHolder_C : public UQuestHolderWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeAfterQuest;                                           // 0x0268 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0270 (size: 0x8)
    class UImage* Image_CommunicationDevice;                                          // 0x0278 (size: 0x8)
    class UImage* Image_QuestlineIcon;                                                // 0x0280 (size: 0x8)
    class UOverlay* QuestHolder;                                                      // 0x0288 (size: 0x8)
    class UVerticalBox* Quests;                                                       // 0x0290 (size: 0x8)
    class UWBP_ChangeQuestlineTip_C* WBP_ChangeQuestlineTip;                          // 0x0298 (size: 0x8)
    class UWBP_QuestInfo_C* QuestInfoWidgetInstance;                                  // 0x02A0 (size: 0x8)
    class UWBP_QuestTip_C* QuestTipWidgetInstance;                                    // 0x02A8 (size: 0x8)
    class UQuestBase* CurrentlyShownQuest;                                            // 0x02B0 (size: 0x8)
    int32 AsyncQuestLinesToLoad;                                                      // 0x02B8 (size: 0x4)

    void TryToSetCorrectQuestLineAfterAsyncLoad();
    void OnLoaded_E23B845745A860261A020F924A4D286B(class UObject* Loaded);
    void OnQuestFinished(class UQuestBase* QuestFinished);
    void OnNewQuestLineFollowed(class UActiveQuestLine* FollowedQuestLine);
    void OnObjectiveStarted(class UObjectiveBase* ObjectiveStarted);
    void OnNewUnlockableUIStateSet(FUnlockableUIState NewUnlockableUIState);
    void OnQuestLineStarted(class UQuestLineBase* QuestLineStarted);
    void OnQuestLineFinished(class UQuestLineBase* QuestLineFinished);
    void OnQuestStarted_Event(class UQuestBase* QuestStarted);
    void OnObjectiveStarted_Event(class UObjectiveBase* ObjectiveStarted);
    void OnMailSend(TSubclassOf<class UGSSMail> MailClass);
    void OnInitialized();
    void TrackLoadedQuestlines(const bool GameLoaded);
    void UpdateQuestlineImage(class UQuestLineBase* QuestLine);
    void UpdateCurrentQuestInfo();
    void Construct();
    void OnQuestStarted(class UQuestBase* QuestStarted);
    void ExecuteUbergraph_WBP_QuestHolder(int32 EntryPoint);
}; // Size: 0x2BC

#endif
