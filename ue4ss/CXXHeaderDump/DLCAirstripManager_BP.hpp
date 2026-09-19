#ifndef UE4SS_SDK_DLCAirstripManager_BP_HPP
#define UE4SS_SDK_DLCAirstripManager_BP_HPP

class ADLCAirstripManager_BP_C : public ADLCAirstripManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06C0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x06C8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_DLCAirstripManager_BP(int32 EntryPoint);
}; // Size: 0x6D0

#endif
