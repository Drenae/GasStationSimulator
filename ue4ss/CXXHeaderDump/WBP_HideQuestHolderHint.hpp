#ifndef UE4SS_SDK_WBP_HideQuestHolderHint_HPP
#define UE4SS_SDK_WBP_HideQuestHolderHint_HPP

class UWBP_HideQuestHolderHint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0268 (size: 0x8)
    class UHorizontalBox* FollowNextQuestLineTip;                                     // 0x0270 (size: 0x8)
    class UTextBlock* LeftText;                                                       // 0x0278 (size: 0x8)
    class UImage* ProgressBar;                                                        // 0x0280 (size: 0x8)
    class UTextBlock* RightText;                                                      // 0x0288 (size: 0x8)
    class UWBP_KeyBindedAction_C* WBP_KeyBindedAction;                                // 0x0290 (size: 0x8)
    class UMaterialInstanceDynamic* ProgressBarImage;                                 // 0x0298 (size: 0x8)
    bool UpdatingProgressBar;                                                         // 0x02A0 (size: 0x1)
    float ProgressBarTime;                                                            // 0x02A4 (size: 0x4)
    float ProgressBarCurrentTime;                                                     // 0x02A8 (size: 0x4)

    void KeyBindChanged(const FName ActionName);
    void KeyBindReset();
    void OnInitialized();
    void Destruct();
    void StartProgressBar(float InteractionTime);
    void EndProgressBar(bool InteractionSuccesfull);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetupProgressBar(bool bIsPressed);
    void SetMode(bool Hidden);
    void Show(class UQuestBase* QuestStarted);
    void PreConstruct(bool IsDesignTime);
    void Show_2(class UActiveQuestLine* FollowedQuestLine);
    void ExecuteUbergraph_WBP_HideQuestHolderHint(int32 EntryPoint);
}; // Size: 0x2AC

#endif
