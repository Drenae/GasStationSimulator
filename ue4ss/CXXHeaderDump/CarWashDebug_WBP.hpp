#ifndef UE4SS_SDK_CarWashDebug_WBP_HPP
#define UE4SS_SDK_CarWashDebug_WBP_HPP

class UCarWashDebug_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* CarWashAutomatic_TXT;                                           // 0x0268 (size: 0x8)
    class UTextBlock* CarWashLevel_TXT;                                               // 0x0270 (size: 0x8)
    class UTextBlock* CarWashOpen_TXT;                                                // 0x0278 (size: 0x8)
    class UTextBlock* TrashInSewerAmount_TXT;                                         // 0x0280 (size: 0x8)
    class UTextBlock* WaterPressureValue_TXT;                                         // 0x0288 (size: 0x8)
    float TimeSinceUpdate;                                                            // 0x0290 (size: 0x4)
    class ACarWash* CarWashRef;                                                       // 0x0298 (size: 0x8)
    class ACarWashStation* CarWashStationRef;                                         // 0x02A0 (size: 0x8)
    class ACarWashTrashVolume* TrashVolume;                                           // 0x02A8 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_CarWashDebug_WBP(int32 EntryPoint);
}; // Size: 0x2B0

#endif
