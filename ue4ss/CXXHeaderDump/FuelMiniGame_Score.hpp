#ifndef UE4SS_SDK_FuelMiniGame_Score_HPP
#define UE4SS_SDK_FuelMiniGame_Score_HPP

class UFuelMiniGame_Score_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewScore;                                                 // 0x0268 (size: 0x8)
    class UTextBlock* LAST_Score_TXT;                                                 // 0x0270 (size: 0x8)
    class UTextBlock* Under_01_TXT;                                                   // 0x0278 (size: 0x8)
    float Time;                                                                       // 0x0280 (size: 0x4)
    float Record;                                                                     // 0x0284 (size: 0x4)
    int32 Strike;                                                                     // 0x0288 (size: 0x4)
    float Last;                                                                       // 0x028C (size: 0x4)

    void Construct();
    void UpdateScore();
    void ExecuteUbergraph_FuelMiniGame_Score(int32 EntryPoint);
}; // Size: 0x290

#endif
