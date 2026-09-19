#ifndef UE4SS_SDK_PlatformCarStats_HPP
#define UE4SS_SDK_PlatformCarStats_HPP

class UPlatformCarStats_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UHorizontalBox* Gear_HorizontalBox;                                         // 0x0268 (size: 0x8)
    class UImage* GearProgressBar;                                                    // 0x0270 (size: 0x8)
    class UImage* StatIcon;                                                           // 0x0278 (size: 0x8)
    class UTextBlock* StatsName_TXT;                                                  // 0x0280 (size: 0x8)
    class UTextBlock* StatsPercentValue_TXT;                                          // 0x0288 (size: 0x8)
    FText StatName;                                                                   // 0x0290 (size: 0x18)
    class UMaterialInstanceDynamic* Mat_INSTGearProgressBar;                          // 0x02A8 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x02B0 (size: 0x8)
    float Progress;                                                                   // 0x02B8 (size: 0x4)
    ECarPartStat StatType;                                                            // 0x02BC (size: 0x1)

    void UpdateVisibility(EJunkyardCarPartType CarPartType);
    void UpdateStats(float ProgressPercent, float MaxProgressValue);
    void Construct();
    void ExecuteUbergraph_PlatformCarStats(int32 EntryPoint);
}; // Size: 0x2BD

#endif
