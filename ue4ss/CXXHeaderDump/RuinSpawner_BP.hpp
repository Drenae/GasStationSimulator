#ifndef UE4SS_SDK_RuinSpawner_BP_HPP
#define UE4SS_SDK_RuinSpawner_BP_HPP

class ARuinSpawner_BP_C : public ARuinSpawner
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_RuinSpawner_BP(int32 EntryPoint);
}; // Size: 0x248

#endif
