#ifndef UE4SS_SDK_ButtonDLCUpgrades_WBP_HPP
#define UE4SS_SDK_ButtonDLCUpgrades_WBP_HPP

class UButtonDLCUpgrades_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UDragoButton* DragoButton_26;                                               // 0x0268 (size: 0x8)
    class UImage* GamePadFrame;                                                       // 0x0270 (size: 0x8)
    class UImage* MatImage;                                                           // 0x0278 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_RightTrigger;                                   // 0x0280 (size: 0x8)
    class UWBP_RedDot_C* WBP_RedDot;                                                  // 0x0288 (size: 0x8)
    FButtonDLCUpgrades_WBP_CClickEvent ClickEvent;                                    // 0x0290 (size: 0x10)
    void ClickEvent(class UTechnologyTree* TechTree, int32 OverlayIndex);
    class UMaterialInstanceDynamic* Material;                                         // 0x02A0 (size: 0x8)
    float Darken;                                                                     // 0x02A8 (size: 0x4)
    float desaturation;                                                               // 0x02AC (size: 0x4)
    class UTexture* Image;                                                            // 0x02B0 (size: 0x8)
    float OutlineSize;                                                                // 0x02B8 (size: 0x4)
    class UTechnologyTree* UpgradeTree;                                               // 0x02C0 (size: 0x8)
    TSoftObjectPtr<class UTexture2D> Icon;                                            // 0x02C8 (size: 0x28)
    int32 OverlayIndex;                                                               // 0x02F0 (size: 0x4)
    class UWBP_UpgradesParent_C* UpgradeParent;                                       // 0x02F8 (size: 0x8)
    FGameplayTag RedDotTag;                                                           // 0x0300 (size: 0x8)

    void SetNormal();
    void SetActive();
    void SetIfDLCIsEnabled(bool bIsDLCEnabled);
    void SetEnabled();
    void SetDisabled();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__ButtonDLCUpgrades_WBP_DragoButton_26_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ButtonDLCUpgrades_WBP_DragoButton_26_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ButtonDLCUpgrades_WBP_DragoButton_26_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void GamePadHover(bool Hover);
    void ExecuteUbergraph_ButtonDLCUpgrades_WBP(int32 EntryPoint);
    void ClickEvent__DelegateSignature(class UTechnologyTree* TechTree, int32 OverlayIndex);
}; // Size: 0x308

#endif
