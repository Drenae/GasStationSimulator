#ifndef UE4SS_SDK_BP_CHuCHu_WeatherManager_Child_HPP
#define UE4SS_SDK_BP_CHuCHu_WeatherManager_Child_HPP

class ABP_CHuCHu_WeatherManager_Child_C : public ABP_WeatherManagerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    TSubclassOf<class ABP_BaseWeather_C> AngryCHUWeather;                             // 0x0278 (size: 0x8)

    void AngryChuWeatherSet(float Delay);
    void ReceiveBeginPlay();
    void AngerTrigger(EChunchumanchuAnger AngerState, const float Value, const float ValueChanged);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_CHuCHu_WeatherManager_Child(int32 EntryPoint);
}; // Size: 0x280

#endif
