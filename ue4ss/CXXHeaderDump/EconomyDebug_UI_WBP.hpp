#ifndef UE4SS_SDK_EconomyDebug_UI_WBP_HPP
#define UE4SS_SDK_EconomyDebug_UI_WBP_HPP

class UEconomyDebug_UI_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UVerticalBox* FuelVertical;                                                 // 0x0268 (size: 0x8)
    class UVerticalBox* ProductVertical;                                              // 0x0270 (size: 0x8)
    float UpdateTime;                                                                 // 0x0278 (size: 0x4)
    float curTime;                                                                    // 0x027C (size: 0x4)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void UpdateList();
    void Construct();
    void ExecuteUbergraph_EconomyDebug_UI_WBP(int32 EntryPoint);
}; // Size: 0x280

#endif
