#ifndef UE4SS_SDK_Event_SandstormSpawn_HPP
#define UE4SS_SDK_Event_SandstormSpawn_HPP

class UEvent_SandstormSpawn_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class UCurveFloat* SandstormCurve;                                                // 0x00B0 (size: 0x8)
    float Time;                                                                       // 0x00B8 (size: 0x4)
    bool Finish;                                                                      // 0x00BC (size: 0x1)
    TArray<AActor*> SandstormSpawners;                                                // 0x00C0 (size: 0x10)

    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void OnGameTimeUpdated_Event_0(const FTimeStruct UpdatedTime);
    void TickObject(float DeltaTime);
    void InitializeEventWorld(class UWorld* World, bool bEventEnabled);
    void ExecuteUbergraph_Event_SandstormSpawn(int32 EntryPoint);
}; // Size: 0xD0

#endif
