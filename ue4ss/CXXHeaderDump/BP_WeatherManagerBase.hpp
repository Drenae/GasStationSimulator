#ifndef UE4SS_SDK_BP_WeatherManagerBase_HPP
#define UE4SS_SDK_BP_WeatherManagerBase_HPP

class ABP_WeatherManagerBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPostProcessComponent* WeatherPP;                                           // 0x0228 (size: 0x8)
    class UBP_Visual_Handler_Component_C* BP_Visual_Handler_Component;                // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    TArray<TSubclassOf<class ABP_BaseWeather_C>> Valid_RandomWeathers;                // 0x0240 (size: 0x10)
    float Time_Left_on_Current_Weather;                                               // 0x0250 (size: 0x4)
    TSubclassOf<class ABP_BaseWeather_C> CurrentWeather;                              // 0x0258 (size: 0x8)
    TSubclassOf<class ABP_BaseWeather_C> Last Weather;                                // 0x0260 (size: 0x8)
    TSubclassOf<class ABP_BaseWeather_C> NextWeather;                                 // 0x0268 (size: 0x8)

    void PickNewWeather();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_WeatherManagerBase(int32 EntryPoint);
}; // Size: 0x270

#endif
