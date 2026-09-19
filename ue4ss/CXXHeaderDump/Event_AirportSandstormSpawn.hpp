#ifndef UE4SS_SDK_Event_AirportSandstormSpawn_HPP
#define UE4SS_SDK_Event_AirportSandstormSpawn_HPP

class UEvent_AirportSandstormSpawn_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    bool Finish;                                                                      // 0x00B0 (size: 0x1)
    float Time;                                                                       // 0x00B4 (size: 0x4)
    class UCurveFloat* SandstormCurve;                                                // 0x00B8 (size: 0x8)

    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void OnGameTimeUpdated(const FTimeStruct UpdatedTime);
    void TickObject(float DeltaTime);
    void InitializeEventWorld(class UWorld* World, bool bEventEnabled);
    void ExecuteUbergraph_Event_AirportSandstormSpawn(int32 EntryPoint);
}; // Size: 0xC0

#endif
