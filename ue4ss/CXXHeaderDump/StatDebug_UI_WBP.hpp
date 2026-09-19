#ifndef UE4SS_SDK_StatDebug_UI_WBP_HPP
#define UE4SS_SDK_StatDebug_UI_WBP_HPP

class UStatDebug_UI_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UVerticalBox* StatsVertical;                                                // 0x0268 (size: 0x8)
    float curTime;                                                                    // 0x0270 (size: 0x4)
    float UpdateTime;                                                                 // 0x0274 (size: 0x4)

    void UpdateList();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_StatDebug_UI_WBP(int32 EntryPoint);
}; // Size: 0x278

#endif
