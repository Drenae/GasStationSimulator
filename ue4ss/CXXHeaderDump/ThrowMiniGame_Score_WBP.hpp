#ifndef UE4SS_SDK_ThrowMiniGame_Score_WBP_HPP
#define UE4SS_SDK_ThrowMiniGame_Score_WBP_HPP

class UThrowMiniGame_Score_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* RecordAnim;                                               // 0x0268 (size: 0x8)
    class UOverlay* Basketball_LastScoreOverlay;                                      // 0x0270 (size: 0x8)
    class UOverlay* Basketball_LongestScore;                                          // 0x0278 (size: 0x8)
    class UImage* Image_123;                                                          // 0x0280 (size: 0x8)
    class UImage* Image_147;                                                          // 0x0288 (size: 0x8)
    class UImage* Image_195;                                                          // 0x0290 (size: 0x8)
    class UImage* Image_395;                                                          // 0x0298 (size: 0x8)
    class UTextBlock* LAST_DISTANCE_TXT;                                              // 0x02A0 (size: 0x8)
    class UTextBlock* LONGEST_DISTANCE_TXT;                                           // 0x02A8 (size: 0x8)
    class UTextBlock* STRIKE_SCORE_TXT;                                               // 0x02B0 (size: 0x8)
    class UOverlay* ThrowingScoreDistance;                                            // 0x02B8 (size: 0x8)
    class UOverlay* TrashLastScore;                                                   // 0x02C0 (size: 0x8)
    class UOverlay* TrashLongestDistance;                                             // 0x02C8 (size: 0x8)
    bool NewRecord;                                                                   // 0x02D0 (size: 0x1)
    class AActor* ThrowedActor;                                                       // 0x02D8 (size: 0x8)
    float CurrentDistance;                                                            // 0x02E0 (size: 0x4)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void AchievementCheck();
    void ExecuteUbergraph_ThrowMiniGame_Score_WBP(int32 EntryPoint);
}; // Size: 0x2E4

#endif
