#ifndef UE4SS_SDK_BP_BaseWeather_HPP
#define UE4SS_SDK_BP_BaseWeather_HPP

class ABP_BaseWeather_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0220 (size: 0x8)
    float WeatherDuration;                                                            // 0x0228 (size: 0x4)
    float CloudDensity;                                                               // 0x022C (size: 0x4)
    float Overall_Intensity;                                                          // 0x0230 (size: 0x4)
    float Saturation;                                                                 // 0x0234 (size: 0x4)
    float Temp;                                                                       // 0x0238 (size: 0x4)
    FLinearColor SkyLightColor;                                                       // 0x023C (size: 0x10)
    float SunLightIntensity;                                                          // 0x024C (size: 0x4)
    float Spawn_localWindParticles;                                                   // 0x0250 (size: 0x4)
    float State_localWindParticles;                                                   // 0x0254 (size: 0x4)
    FLinearColor SkyLightLowerHemisphereColor;                                        // 0x0258 (size: 0x10)

}; // Size: 0x268

#endif
