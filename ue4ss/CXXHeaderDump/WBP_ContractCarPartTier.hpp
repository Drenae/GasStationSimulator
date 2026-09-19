#ifndef UE4SS_SDK_WBP_ContractCarPartTier_HPP
#define UE4SS_SDK_WBP_ContractCarPartTier_HPP

class UWBP_ContractCarPartTier_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* CheckAnim;                                                // 0x0268 (size: 0x8)
    class UCheckBox* CheckBox_120;                                                    // 0x0270 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0278 (size: 0x8)
    class UImage* Image_99;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0288 (size: 0x8)
    class UTextBlock* TextBlock_PartName;                                             // 0x0290 (size: 0x8)
    FText PartName;                                                                   // 0x0298 (size: 0x18)
    class UTexture2D* Icon;                                                           // 0x02B0 (size: 0x8)
    FLinearColor TierColor;                                                           // 0x02B8 (size: 0x10)
    FSavedCarPart CarPartStructure;                                                   // 0x02C8 (size: 0x128)
    EJunkyardCarPartType CarPartType;                                                 // 0x03F0 (size: 0x1)

    void SetUnchecked();
    void SetChecked();
    void OnLoaded_8FE0C6EA4E10C30FE8674FBCEEB1E420(class UObject* Loaded);
    void Construct();
    void ExecuteUbergraph_WBP_ContractCarPartTier(int32 EntryPoint);
}; // Size: 0x3F1

#endif
