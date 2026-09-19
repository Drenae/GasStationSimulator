#ifndef UE4SS_SDK_BP_ClearTrashVolume_HPP
#define UE4SS_SDK_BP_ClearTrashVolume_HPP

class ABP_ClearTrashVolume_C : public ATriggerBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)

    void ReceiveBeginPlay();
    void ClearTrash(const bool GameLoaded);
    void DestroyAfterSetTime();
    void ExecuteUbergraph_BP_ClearTrashVolume(int32 EntryPoint);
}; // Size: 0x230

#endif
