#ifndef UE4SS_SDK_BP_Visual_Handler_Component_HPP
#define UE4SS_SDK_BP_Visual_Handler_Component_HPP

class UBP_Visual_Handler_Component_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    float BlendingDuration;                                                           // 0x00B8 (size: 0x4)
    class AUltra_Dynamic_Sky_BP_Paradise_Island_C* Current_UDS;                       // 0x00C0 (size: 0x8)
    float BlendProgress;                                                              // 0x00C8 (size: 0x4)
    TSubclassOf<class ABP_BaseWeather_C> PreviousWeather;                             // 0x00D0 (size: 0x8)
    TSubclassOf<class ABP_BaseWeather_C> CurrentWeather;                              // 0x00D8 (size: 0x8)
    class UPostProcessComponent* PP;                                                  // 0x00E0 (size: 0x8)
    FPostProcessSettings Settings;                                                    // 0x00F0 (size: 0x560)
    TArray<UNiagaraComponent*> WindLocalParticles;                                    // 0x0650 (size: 0x10)

    void HandleSkylightLowerHemisphereColor();
    void handle_Particles_local();
    void Handle_Wind();
    void HandleSunLightIntensity();
    void StartUpdatingVisuals();
    void HandleSkylightColor();
    void HandleTemp();
    void Handle_PP_Components();
    void HandleSaturation();
    void HandleOverall_intensity();
    void HandleClouds();
    void Handle_Sky_Components();
    void Update Blending Values(float Delta s);
    void OnWeatherChanged(TSubclassOf<class ABP_BaseWeather_C> NextWeather);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Feed_PP(class UPostProcessComponent* PP);
    void ExecuteUbergraph_BP_Visual_Handler_Component(int32 EntryPoint);
}; // Size: 0x660

#endif
