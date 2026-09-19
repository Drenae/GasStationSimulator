#ifndef UE4SS_SDK_AnimationProp_HPP
#define UE4SS_SDK_AnimationProp_HPP

class AAnimationProp_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)

    void Launch();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_AnimationProp(int32 EntryPoint);
}; // Size: 0x230

#endif
