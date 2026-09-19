#ifndef UE4SS_SDK_BP_CinemaLights_HPP
#define UE4SS_SDK_BP_CinemaLights_HPP

class ABP_CinemaLights_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0228 (size: 0x8)
    class UStaticMeshComponent* SM_StreetLamp_03;                                     // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    float LightsTimeline_NewTrack_0_3C18758D4608D0153A14CC9D8D9478B0;                 // 0x0240 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LightsTimeline__Direction_3C18758D4608D0153A14CC9D8D9478B0; // 0x0244 (size: 0x1)
    class UTimelineComponent* LightsTimeline;                                         // 0x0248 (size: 0x8)
    class UMaterialInstanceDynamic* Lamp_DMI;                                         // 0x0250 (size: 0x8)

    void LightsTimeline__FinishedFunc();
    void LightsTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void ToggleLightsOverTime(bool bOn);
    void ToggleLightsDebug();
    void RegisterCinemaLight();
    void ToggleLightsInstant(bool bOn);
    void ExecuteUbergraph_BP_CinemaLights(int32 EntryPoint);
}; // Size: 0x258

#endif
