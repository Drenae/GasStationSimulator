#ifndef UE4SS_SDK_WBP_SingleContractPlatform_HPP
#define UE4SS_SDK_WBP_SingleContractPlatform_HPP

class UWBP_SingleContractPlatform_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* CarDecalsCheckAnim;                                       // 0x0268 (size: 0x8)
    class UWidgetAnimation* CarPaintCheckAnim;                                        // 0x0270 (size: 0x8)
    class UWidgetAnimation* CarTypeCheckAnim;                                         // 0x0278 (size: 0x8)
    class UVerticalBox* Color_VerticalBox;                                            // 0x0280 (size: 0x8)
    class UTextBlock* ContractTimeLeft;                                               // 0x0288 (size: 0x8)
    class UVerticalBox* Decal_VerticalBox;                                            // 0x0290 (size: 0x8)
    class UExpandableArea* ExpandableArea_CarColor;                                   // 0x0298 (size: 0x8)
    class UExpandableArea* ExpandableArea_CarDecals;                                  // 0x02A0 (size: 0x8)
    class UExpandableArea* ExpandableArea_CarParts;                                   // 0x02A8 (size: 0x8)
    class UExpandableArea* ExpandableArea_CarStats;                                   // 0x02B0 (size: 0x8)
    class UExpandableArea* ExpandableArea_CarTier;                                    // 0x02B8 (size: 0x8)
    class UExpandableArea* ExpandableArea_CarType;                                    // 0x02C0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x02C8 (size: 0x8)
    class UImage* Image_5;                                                            // 0x02D0 (size: 0x8)
    class UImage* Image_6;                                                            // 0x02D8 (size: 0x8)
    class UPlatformCarStatsSmall_C* StatAcceleration;                                 // 0x02E0 (size: 0x8)
    class UPlatformCarStatsSmall_C* StatHandling;                                     // 0x02E8 (size: 0x8)
    class UPlatformCarStatsSmall_C* StatSpeed;                                        // 0x02F0 (size: 0x8)
    class UPlatformCarStatsSmall_C* StatStrenght;                                     // 0x02F8 (size: 0x8)
    class UHorizontalBox* Time_HorizontalBox;                                         // 0x0300 (size: 0x8)
    class UImage* TimeLeftProgressBar;                                                // 0x0308 (size: 0x8)
    class UVerticalBox* VerticalBox_CarParts;                                         // 0x0310 (size: 0x8)
    class UVerticalBox* VerticalBox_CarParts_Tier;                                    // 0x0318 (size: 0x8)
    class UVerticalBox* VerticalBox_CarType;                                          // 0x0320 (size: 0x8)
    class UVerticalBox* VerticalBox_Color;                                            // 0x0328 (size: 0x8)
    class UVerticalBox* VerticalBox_decals;                                           // 0x0330 (size: 0x8)
    class UVerticalBox* VerticalBox_Parts;                                            // 0x0338 (size: 0x8)
    class UVerticalBox* VerticalBox_Parts_Tier;                                       // 0x0340 (size: 0x8)
    class UVerticalBox* VerticalBox_Stats;                                            // 0x0348 (size: 0x8)
    class UWBP_ContractCarPart_C* WBP_ContractCarPart;                                // 0x0350 (size: 0x8)
    class USpecialContract* Contract;                                                 // 0x0358 (size: 0x8)
    TSubclassOf<class AJunkyardCarWreck> As Junkyard Car Wreck;                       // 0x0360 (size: 0x8)
    int32 CurrentAmountOfDecals;                                                      // 0x0368 (size: 0x4)
    FText PaintTypeName;                                                              // 0x0370 (size: 0x18)
    class AJunkyardCarWreck* JunkyardWreckREF;                                        // 0x0388 (size: 0x8)
    class AJunkyardCarWreckCustomizable* As Junkyard Car Wreck Customizable;          // 0x0390 (size: 0x8)
    class UGSS_Button_WBP_C* SelectButton_REF;                                        // 0x0398 (size: 0x8)
    bool CorrectWreckType;                                                            // 0x03A0 (size: 0x1)
    TArray<UWBP_ContractCarPart_C*> PaintTypeButtons;                                 // 0x03A8 (size: 0x10)
    TArray<UWBP_ContractCarPart_C*> PaintColorButtons;                                // 0x03B8 (size: 0x10)
    TArray<UWBP_ContractCarPart_C*> PaintMaskButtons;                                 // 0x03C8 (size: 0x10)
    float MaxTime;                                                                    // 0x03D8 (size: 0x4)
    float TimeProgressBar;                                                            // 0x03DC (size: 0x4)
    bool bIsInCustomizationPanel;                                                     // 0x03E0 (size: 0x1)

    void UpdateTime(FTimeStruct TimeStruct);
    void IsCorrectPaintTypeCheck();
    void IsCorrectMaskCheck();
    void Update Contract(class UObject* WreckRef);
    void AreCorrectTiersCheck();
    void AreCorrectCarPartsCheck();
    void AreStatsHighEnoughCheck();
    void IsCorrectPaintCheck();
    void IsCorrectWreckTypeCheck();
    void ShowCarPartsTier();
    void SetPaint(EContractRequirement ContractPaintRequirement);
    void ShowCarParts();
    void Show Decals();
    void ShowWreckStats(EContractRequirement WreckStatRequirement);
    void ShowWreckType();
    void OnLoaded_3BC86B3349586879EDE4FBA205541A2F(UClass* Loaded);
    void OnLoaded_1FBE3B0D486A965B1709CD922C92DAC3(class UObject* Loaded);
    void Construct();
    void LoadCarIcon(TSoftObjectPtr<class UTexture2D> Texture, class UWBP_ContractCarPart_C* ContractCarType);
    void OnGameUpdated(const FTimeStruct UpdatedTime);
    void Destruct();
    void ExecuteUbergraph_WBP_SingleContractPlatform(int32 EntryPoint);
}; // Size: 0x3E1

#endif
