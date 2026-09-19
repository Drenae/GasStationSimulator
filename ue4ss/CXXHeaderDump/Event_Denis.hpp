#ifndef UE4SS_SDK_Event_Denis_HPP
#define UE4SS_SDK_Event_Denis_HPP

class UEvent_Denis_C : public UEvent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TSoftClassPtr<AAICharacterBase> DenisClass;                                       // 0x00B0 (size: 0x28)
    TSoftClassPtr<UDenisTask> DenisPaintingWallTask;                                  // 0x00D8 (size: 0x28)
    bool bIsDenisForceSpawnedFromQuest;                                               // 0x0100 (size: 0x1)

    bool CalcTime();
    void OnLoaded_C5EC1C854CB734BE3F6EA89D42213956(UClass* Loaded);
    void OnLoaded_48ADE50F4E156E66D2E64F80E9450CBC(UClass* Loaded);
    void InitializeEvent(class APlayerController* NewPlayerController, FGSSEventTime NewGSSEventTime);
    void SpawnDenis();
    void OnGameTimeUpdated(const FTimeStruct UpdatedTime);
    void InitializeEventWorld(class UWorld* World, bool bEventEnabled);
    void ForceDenis();
    void ExecuteUbergraph_Event_Denis(int32 EntryPoint);
}; // Size: 0x101

#endif
