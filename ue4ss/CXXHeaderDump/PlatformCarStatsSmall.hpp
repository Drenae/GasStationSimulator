#ifndef UE4SS_SDK_PlatformCarStatsSmall_HPP
#define UE4SS_SDK_PlatformCarStatsSmall_HPP

class UPlatformCarStatsSmall_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x0268 (size: 0x8)
    class UHorizontalBox* Gear_HorizontalBox;                                         // 0x0270 (size: 0x8)
    class UImage* GearProgressBar;                                                    // 0x0278 (size: 0x8)
    class UImage* Image_85;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_99;                                                           // 0x0288 (size: 0x8)
    class UTextBlock* StatsPercentValue_TXT;                                          // 0x0290 (size: 0x8)
    FText StatName;                                                                   // 0x0298 (size: 0x18)
    class UMaterialInstanceDynamic* Mat_INSTGearProgressBar;                          // 0x02B0 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x02B8 (size: 0x8)
    float Progress;                                                                   // 0x02C0 (size: 0x4)
    bool bShowCheckbox;                                                               // 0x02C4 (size: 0x1)
    ECarPartStat StatType;                                                            // 0x02C5 (size: 0x1)

    void UpdateVisibility(EJunkyardCarPartType CarPartType);
    void SetChecked();
    void CheckCheckbox(bool InIsChecked);
    void PreConstruct(bool IsDesignTime);
    void UpdateStats(float ProgressPercent);
    void ExecuteUbergraph_PlatformCarStatsSmall(int32 EntryPoint);
}; // Size: 0x2C6

#endif
