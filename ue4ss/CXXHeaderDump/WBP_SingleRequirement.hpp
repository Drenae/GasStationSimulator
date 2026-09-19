#ifndef UE4SS_SDK_WBP_SingleRequirement_HPP
#define UE4SS_SDK_WBP_SingleRequirement_HPP

class UWBP_SingleRequirement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UVerticalBox* Acceleration_VerticalBox;                                     // 0x0268 (size: 0x8)
    class UTextBlock* AdditionalInfo;                                                 // 0x0270 (size: 0x8)
    class UImage* BG_RequirementMet;                                                  // 0x0278 (size: 0x8)
    class UWidgetSwitcher* Change_Requirement;                                        // 0x0280 (size: 0x8)
    class UTextBlock* ColorCode;                                                      // 0x0288 (size: 0x8)
    class UImage* ColorRequired;                                                      // 0x0290 (size: 0x8)
    class UImage* DecalIcon;                                                          // 0x0298 (size: 0x8)
    class UTextBlock* DecalName;                                                      // 0x02A0 (size: 0x8)
    class UVerticalBox* Handling_VerticalBox;                                         // 0x02A8 (size: 0x8)
    class UTextBlock* Headline_text;                                                  // 0x02B0 (size: 0x8)
    class UImage* Image_114;                                                          // 0x02B8 (size: 0x8)
    class UImage* Image_261;                                                          // 0x02C0 (size: 0x8)
    class UImage* Image_348;                                                          // 0x02C8 (size: 0x8)
    class UImage* Image_473;                                                          // 0x02D0 (size: 0x8)
    class UImage* PartIcon;                                                           // 0x02D8 (size: 0x8)
    class UImage* PartTierColor;                                                      // 0x02E0 (size: 0x8)
    class UImage* ProgressBar_Acceleration;                                           // 0x02E8 (size: 0x8)
    class UImage* ProgressBar_Handling;                                               // 0x02F0 (size: 0x8)
    class UImage* ProgressBar_Image_1;                                                // 0x02F8 (size: 0x8)
    class UImage* ProgressBar_TopSpeed;                                               // 0x0300 (size: 0x8)
    class UImage* ProgressBarStrenght;                                                // 0x0308 (size: 0x8)
    class UTextBlock* StatNameOverallCar;                                             // 0x0310 (size: 0x8)
    class UVerticalBox* Strengh_VerticalBox;                                          // 0x0318 (size: 0x8)
    class UHorizontalBox* Tier_HorizontalBox;                                         // 0x0320 (size: 0x8)
    class UTextBlock* TierName;                                                       // 0x0328 (size: 0x8)
    class UTextBlock* TierName_Wreck;                                                 // 0x0330 (size: 0x8)
    class UVerticalBox* TopSpeed_VerticalBox;                                         // 0x0338 (size: 0x8)
    class UImage* WreckBG;                                                            // 0x0340 (size: 0x8)
    class UImage* WreckIcon;                                                          // 0x0348 (size: 0x8)
    bool bMet;                                                                        // 0x0350 (size: 0x1)
    class UMaterialInstanceDynamic* MAT_TierColorWreck;                               // 0x0358 (size: 0x8)
    class UMaterialInstanceDynamic* MAT_TierPartColor;                                // 0x0360 (size: 0x8)
    class UMaterialInstanceDynamic* ProgressTopSpeed;                                 // 0x0368 (size: 0x8)
    class UMaterialInstanceDynamic* ProgressBarOverallCar;                            // 0x0370 (size: 0x8)
    class UMaterialInstanceDynamic* ProgressAcceleration;                             // 0x0378 (size: 0x8)
    class UMaterialInstanceDynamic* ProgressStrengh;                                  // 0x0380 (size: 0x8)
    class UMaterialInstanceDynamic* ProgressHandling;                                 // 0x0388 (size: 0x8)

    void NameRequired(bool IsRequired, FText CarPartName, bool ReqMet);
    void RarityRequired(bool bIsReq, bool bReqMet);
    void StrenghRequired(bool bIsReq, bool bReqMet);
    void TopSpeedRequired(bool bIsReq, bool bReqMet);
    void HandlingRequired(bool bIsReq, bool bReqMet);
    void AccelerationRequired(bool bIsReq, bool bReqMet);
    void SetOverallCarStatistic(FText StatName, float ProgressAmount);
    void SetDecal(class UTexture2D* DecalIcon, FText DecalName);
    void SetColor(FText ColorCode, FLinearColor ColorRequired);
    void SetWreck(FText Name, class UTexture2D* Icon, FText TierName, bool bIsReq, bool bReqMet);
    void SetCarPart(FText Name, class UTexture2D* Icon, FText TierName, float TopSpeedValue, float HandlingValue, float AccelerationValue, float StrenghtValue);
    void Construct();
    void ExecuteUbergraph_WBP_SingleRequirement(int32 EntryPoint);
}; // Size: 0x390

#endif
