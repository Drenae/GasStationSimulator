#ifndef UE4SS_SDK_JunkyardManager_BP_HPP
#define UE4SS_SDK_JunkyardManager_BP_HPP

class AJunkyardManager_BP_C : public AJunkyardManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0970 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0978 (size: 0x8)

    void ReceiveBeginPlay();
    void OnContractFinish(class UContractBase* CompletedContract, bool bSuccess);
    void CustomEvent(const FSaleSlot& SaleSlot, const bool bCarSold);
    void OnNewFameLevel(const int32 NewLevel);
    void ExecuteUbergraph_JunkyardManager_BP(int32 EntryPoint);
}; // Size: 0x980

#endif
