#ifndef UE4SS_SDK_BP_CustomPostProcess_HPP
#define UE4SS_SDK_BP_CustomPostProcess_HPP

class ABP_CustomPostProcess_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    FPostProcessSettings PP;                                                          // 0x0240 (size: 0x560)

    void getPostProcess(FPostProcessSettings& PostProcessSettings);
    void UserConstructionScript();
    void UpdatePostProcess(FPostProcessSettings PP);
    void ExecuteUbergraph_BP_CustomPostProcess(int32 EntryPoint);
}; // Size: 0x7A0

#endif
