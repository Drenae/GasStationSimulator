#ifndef UE4SS_SDK_PaintBrush_BP_HPP
#define UE4SS_SDK_PaintBrush_BP_HPP

class APaintBrush_BP_C : public APaintBrush
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x03B8 (size: 0x8)
    class UWBP_PaintBrush_C* PaintBrushWidget;                                        // 0x03C0 (size: 0x8)
    bool PaintBrushREF;                                                               // 0x03C8 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_PaintBrush_BP(int32 EntryPoint);
}; // Size: 0x3C9

#endif
