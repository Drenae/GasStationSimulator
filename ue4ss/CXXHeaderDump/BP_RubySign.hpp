#ifndef UE4SS_SDK_BP_RubySign_HPP
#define UE4SS_SDK_BP_RubySign_HPP

class ABP_RubySign_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    TArray<UMaterialInterface*> Original Materials;                                   // 0x0238 (size: 0x10)

    void ReceiveBeginPlay();
    void On DLC Activation State Changed(EDLCName DLCName, bool bActivated);
    void ExecuteUbergraph_BP_RubySign(int32 EntryPoint);
}; // Size: 0x248

#endif
