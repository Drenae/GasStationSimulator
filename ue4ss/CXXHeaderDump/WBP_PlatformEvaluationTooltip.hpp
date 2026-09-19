#ifndef UE4SS_SDK_WBP_PlatformEvaluationTooltip_HPP
#define UE4SS_SDK_WBP_PlatformEvaluationTooltip_HPP

class UWBP_PlatformEvaluationTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image;                                                              // 0x0268 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0280 (size: 0x8)
    class UImage* Image_40;                                                           // 0x0288 (size: 0x8)
    class UImage* Image_130;                                                          // 0x0290 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x0298 (size: 0x8)
    class UVerticalBox* VerticalBox_Customization;                                    // 0x02A0 (size: 0x8)
    class UVerticalBox* VerticalBox_CustomizationPositions;                           // 0x02A8 (size: 0x8)
    class UVerticalBox* VerticalBox_Parts;                                            // 0x02B0 (size: 0x8)
    class UVerticalBox* VerticalBox_PartsPositions;                                   // 0x02B8 (size: 0x8)
    class UVerticalBox* VerticalBox_Stats;                                            // 0x02C0 (size: 0x8)
    class UVerticalBox* VerticalBox_StatsPositions;                                   // 0x02C8 (size: 0x8)
    class UVerticalBox* VerticalBox_Summary;                                          // 0x02D0 (size: 0x8)
    class UVerticalBox* VerticalBox_SummaryPositions;                                 // 0x02D8 (size: 0x8)
    class UVerticalBox* VerticalBox_Wreck;                                            // 0x02E0 (size: 0x8)
    class UVerticalBox* VerticalBox_WreckPositions;                                   // 0x02E8 (size: 0x8)
    class AJunkyardCarWreck* WreckRef;                                                // 0x02F0 (size: 0x8)
    FCarPartData AverageData;                                                         // 0x02F8 (size: 0x18)
    bool bAnyDecal;                                                                   // 0x0310 (size: 0x1)
    float PaintPrice;                                                                 // 0x0314 (size: 0x4)
    class UWBP_PlatformPanelNew_C* PlatformPanelRef;                                  // 0x0318 (size: 0x8)

    void Setup(class AJunkyardCarWreck* Wreck, class UWBP_PlatformPanelNew_C* PlatformPanelRef);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_WBP_PlatformEvaluationTooltip(int32 EntryPoint);
}; // Size: 0x320

#endif
