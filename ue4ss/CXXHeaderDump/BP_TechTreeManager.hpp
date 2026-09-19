#ifndef UE4SS_SDK_BP_TechTreeManager_HPP
#define UE4SS_SDK_BP_TechTreeManager_HPP

class UBP_TechTreeManager_C : public UTechTreeManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    TMap<TEnumAsByte<Enum_TT_Cost::Type>, uint8> Resources;                           // 0x0168 (size: 0x50)
    FBP_TechTreeManager_COnTechnologyUnlock OnTechnologyUnlock;                       // 0x01B8 (size: 0x10)
    void OnTechnologyUnlock(class UTechnologyAsset* Asset, bool Unlocked);

    void UnlockCurrentTechnology(class UTechnologyAsset* InputPin);
    void AddResources();
    void PayCost(TMap<uint8, uint8> TechnologyCost, class UBP_AdvencedTechnologyAsset_C* AdvencedTechnologyAsset);
    void HasEnoughResources(TMap<uint8, uint8> TechnologyCost, bool& EnoughResources);
    void CheckUnlockCost(class UTechnologyAsset* Technology, bool WithoutPay, bool& CanUnlock, bool& MoneyCondition, bool& QuestCondition, bool& BuildingLevelCondition, bool& ItemsCondition, bool& ContractPoints);
    void TryPayTechnologyCost(TMap<uint8, uint8> TechnologyCost, class UBP_AdvencedTechnologyAsset_C* AdvencedTechnologyAsset, bool WithoutPay, bool& Success, bool& MoneyCondition, bool& QuestCondition, bool& BuildingLevelCondition, bool& ItemsCondition, bool& ContractPoints);
    void TryToUnlockTechnology(class UTechnologyAsset* Technology);
    void ExecuteUbergraph_BP_TechTreeManager(int32 EntryPoint);
    void OnTechnologyUnlock__DelegateSignature(class UTechnologyAsset* Asset, bool Unlocked);
}; // Size: 0x1C8

#endif
