#ifndef UE4SS_SDK_PC_Station_Renown_HPP
#define UE4SS_SDK_PC_Station_Renown_HPP

class UPC_Station_Renown_C : public UGSSInnerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UTextBlock* HappyAngryCapacityTXT;                                          // 0x0290 (size: 0x8)
    class UTextBlock* HappyLevelTXT;                                                  // 0x0298 (size: 0x8)
    class UTextBlock* HappyPercentTXT;                                                // 0x02A0 (size: 0x8)
    class UImage* HappyRadialProgress;                                                // 0x02A8 (size: 0x8)
    class UOverlay* PopularityOverlay;                                                // 0x02B0 (size: 0x8)
    int32 CurrentHappy;                                                               // 0x02B8 (size: 0x4)
    int32 HappyMax;                                                                   // 0x02BC (size: 0x4)
    int32 MinHappy;                                                                   // 0x02C0 (size: 0x4)
    int32 CurrentPopularityLevel;                                                     // 0x02C4 (size: 0x4)

    void Update Happy Angry(const int32 CurrentHappy, int32 MinHappy, int32 HappyMax, int32 CurrentPopularityLevel);
    void UpdateHappyAngryMax();
    void UpdateHappyLevel(const int32 HappyAngryPopularityLevel);
    void UpdateHappyAmmount(const int32 HappyCount, const int32 HappyMin, const int32 HappyMax, const bool bIsHappy, const int32 CurrentPopularityLevel, const class UObject* Instaginator, const FString Reason);
    void Construct();
    void Destruct();
    void CustomEvent_0(const int32 HappyCount, const int32 HappyMin, const int32 HappyMax, const bool bIsHappy, const int32 CurrentPopularityLevel, const class UObject* Instaginator, const FString Reason);
    void CustomEvent_1(const int32 HappyAngryPopularityLevel);
    void ExecuteUbergraph_PC_Station_Renown(int32 EntryPoint);
}; // Size: 0x2C8

#endif
