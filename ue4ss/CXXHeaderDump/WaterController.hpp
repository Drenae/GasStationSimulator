#ifndef UE4SS_SDK_WaterController_HPP
#define UE4SS_SDK_WaterController_HPP

class AWaterController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    TArray<AEmitter*> WashVFX;                                                        // 0x0230 (size: 0x10)

    void ReceiveBeginPlay();
    void StartVFX();
    void StopVFX(ETaskResult TaskResultValue);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_WaterController(int32 EntryPoint);
}; // Size: 0x240

#endif
