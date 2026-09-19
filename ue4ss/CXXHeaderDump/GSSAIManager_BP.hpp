#ifndef UE4SS_SDK_GSSAIManager_BP_HPP
#define UE4SS_SDK_GSSAIManager_BP_HPP

class AGSSAIManager_BP_C : public AGSSNPAIManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)

    void SpawnJoe();
    void ExecuteUbergraph_GSSAIManager_BP(int32 EntryPoint);
}; // Size: 0x250

#endif
