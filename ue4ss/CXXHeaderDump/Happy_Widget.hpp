#ifndef UE4SS_SDK_Happy_Widget_HPP
#define UE4SS_SDK_Happy_Widget_HPP

class UHappy_Widget_C : public UGSSInnerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UWidgetAnimation* RedAnimation;                                             // 0x0290 (size: 0x8)
    class UWidgetAnimation* GreenAnimation;                                           // 0x0298 (size: 0x8)
    class UWidgetAnimation* StartingAnim;                                             // 0x02A0 (size: 0x8)
    class UWBP_Hud_Popularity_Anim_C* AnimationWidget;                                // 0x02A8 (size: 0x8)
    class UTextBlock* HappyPercentTXT;                                                // 0x02B0 (size: 0x8)
    class UImage* Image_71;                                                           // 0x02B8 (size: 0x8)
    class UOverlay* MainOverlay;                                                      // 0x02C0 (size: 0x8)
    class UTextBlock* popualrity;                                                     // 0x02C8 (size: 0x8)
    class UProgressBar* ProgressBar;                                                  // 0x02D0 (size: 0x8)
    class AGSSGameState* GameState;                                                   // 0x02D8 (size: 0x8)
    float DivideProgressBar;                                                          // 0x02E0 (size: 0x4)
    float CurrentHappyAmmount;                                                        // 0x02E4 (size: 0x4)
    int32 LocalHappyAmmount;                                                          // 0x02E8 (size: 0x4)
    int32 LocalHappyMinimal;                                                          // 0x02EC (size: 0x4)
    int32 BeforeUpdateAmmount;                                                        // 0x02F0 (size: 0x4)
    int32 LocalAmount;                                                                // 0x02F4 (size: 0x4)
    bool UpdateComingFromLevelUp;                                                     // 0x02F8 (size: 0x1)

    void UpdateHappyAngry(int32 CurrentHappy, int32 MinHappy, int32 HappyMax, int32 HappyLevel);
    void Construct();
    void OnHappyAngryPopularityLevelUp(const int32 HappyAngryPopularityLevel);
    void OnHappyAngryUpdated(const int32 HappyCount, const int32 HappyMin, const int32 HappyMax, const bool bIsHappy, const int32 CurrentPopularityLevel, const class UObject* Instaginator, const FString Reason);
    void ShowWidget();
    void MaxPopularityVizual();
    void OnFinishGameLoaded_Event_0(const bool GameLoaded);
    void OnQuestSpawned_Event_0(const class UGSSQuest* GSSQuest);
    void CheckNotificationVisibility(FUnlockableUIState NewUnlockableUIState);
    void ExecuteUbergraph_Happy_Widget(int32 EntryPoint);
}; // Size: 0x2F9

#endif
