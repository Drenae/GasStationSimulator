#ifndef UE4SS_SDK_GSSPlayerState_BP_HPP
#define UE4SS_SDK_GSSPlayerState_BP_HPP

class AGSSPlayerState_BP_C : public AGSSPlayerState
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0370 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_GSSPlayerState_BP(int32 EntryPoint);
}; // Size: 0x378

#endif
