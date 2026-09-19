#ifndef UE4SS_SDK_WBP_TechTreeSlot_HPP
#define UE4SS_SDK_WBP_TechTreeSlot_HPP

class UWBP_TechTreeSlot_C : public UTechNodeWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* Hover;                                                    // 0x0270 (size: 0x8)
    class UGSSButton* ActionUpgradesButton;                                           // 0x0278 (size: 0x8)
    class UImage* CurrentUpgradeOverlay;                                              // 0x0280 (size: 0x8)
    class UImage* Image;                                                              // 0x0288 (size: 0x8)
    class UImage* Image_149;                                                          // 0x0290 (size: 0x8)
    class UImage* Image_163;                                                          // 0x0298 (size: 0x8)
    class UImage* Image_frame;                                                        // 0x02A0 (size: 0x8)
    class UImage* Image_locked;                                                       // 0x02A8 (size: 0x8)
    class UImage* Image_upgrade_Green;                                                // 0x02B0 (size: 0x8)
    class UImage* Image_upgrade_owned;                                                // 0x02B8 (size: 0x8)
    class UImage* Image_upgrade_Red;                                                  // 0x02C0 (size: 0x8)
    class UOverlay* Overlay_name;                                                     // 0x02C8 (size: 0x8)
    class UOverlay* OwnedCanBeUpgradedIndicator;                                      // 0x02D0 (size: 0x8)
    class UTextBlock* TextBlock_lvl;                                                  // 0x02D8 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x02E0 (size: 0x8)
    class UImage* UpgradeCard_IMG;                                                    // 0x02E8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_BottomButton;                                   // 0x02F0 (size: 0x8)
    class UBP_TechTreeManager_C* BP Tech Tree Manager;                                // 0x02F8 (size: 0x8)
    bool OnMoneyUpdateBinded;                                                         // 0x0300 (size: 0x1)
    class UWBP_UpgradesParent_C* Upgrade Widget Ref;                                  // 0x0308 (size: 0x8)
    bool bIsClickable;                                                                // 0x0310 (size: 0x1)
    FTimerHandle Timer;                                                               // 0x0318 (size: 0x8)

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void CheckTechnologyByBuildingsLevel(bool& Unlocked);
    void SetVizualAndInfo();
    void UpdateUnlocked(bool Unlocked);
    void OnTechUnlocked(class UTTTechNode* TechNode, bool IsUnLocked);
    void OnTechNodeInitialized();
    void OnTimeUpdateCheckCanBeUpgraded(const FTimeStruct UpdatedTime);
    void ToggleHightlight(bool Toogle);
    void CustomOnClicked();
    void OnTechTreeSelect(class UTechnologyTree* TechTree);
    void SetUpgradeWidget(class UWBP_UpgradesParent_C* UpgradeWidgetRef);
    void BlockCLick();
    void CustomEvent_0();
    void Destruct();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void GamePadHover(bool Hover);
    void InitializeTechNode(class UTechnologyAsset* NewTechAsset);
    void ExecuteUbergraph_WBP_TechTreeSlot(int32 EntryPoint);
}; // Size: 0x320

#endif
