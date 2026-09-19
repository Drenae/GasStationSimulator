#ifndef UE4SS_SDK_WBP_UpgradesParent_HPP
#define UE4SS_SDK_WBP_UpgradesParent_HPP

class UWBP_UpgradesParent_C : public UPC_Upgrades
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)

    void RefreshassetToUnlock(class UTechnologyAsset* TechAsset);
    void SetButtonsNormal();
    void ExecuteUbergraph_WBP_UpgradesParent(int32 EntryPoint);
}; // Size: 0x298

#endif
