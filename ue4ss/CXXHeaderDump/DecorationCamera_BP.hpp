#ifndef UE4SS_SDK_DecorationCamera_BP_HPP
#define UE4SS_SDK_DecorationCamera_BP_HPP

class ADecorationCamera_BP_C : public ADecorationCamera
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UArrowComponent* arrow;                                                     // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    FName FoundMap;                                                                   // 0x02B8 (size: 0x8)
    int32 DependingMapLevelIndex;                                                     // 0x02C0 (size: 0x4)
    TArray<FName> LevelsToLoad;                                                       // 0x02C8 (size: 0x10)

    void ReceiveBeginPlay();
    void ActivateCamera();
    void DeActivateCamera();
    void ReceiveTick(float DeltaSeconds);
    void LoadDependingMaps(FName LoadedLevelName);
    void LoadDecorationLevel(FName LevelName, int32 UUID);
    void ExecuteUbergraph_DecorationCamera_BP(int32 EntryPoint);
}; // Size: 0x2D8

#endif
