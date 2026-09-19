#ifndef UE4SS_SDK_BP_Base_DebugCamera_HPP
#define UE4SS_SDK_BP_Base_DebugCamera_HPP

class ABP_Base_DebugCamera_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnDebugCamerasActivated();
    void OnDebugCamerasDeactivated();
    void ExecuteUbergraph_BP_Base_DebugCamera(int32 EntryPoint);
}; // Size: 0x238

#endif
