#ifndef UE4SS_SDK_BP_Lantern_HPP
#define UE4SS_SDK_BP_Lantern_HPP

class ABP_Lantern_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0228 (size: 0x8)
    class UStaticMeshComponent* SM_Lantern;                                           // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    float Timeline_0_Flicker_14E703CA4F9A085651972BA807DEE5DD;                        // 0x0240 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_14E703CA4F9A085651972BA807DEE5DD; // 0x0244 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0248 (size: 0x8)
    float LightIntensity;                                                             // 0x0250 (size: 0x4)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Lantern(int32 EntryPoint);
}; // Size: 0x254

#endif
