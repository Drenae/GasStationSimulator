#ifndef UE4SS_SDK_DirtyActor_PaintColor_HPP
#define UE4SS_SDK_DirtyActor_PaintColor_HPP

class ADirtyActor_PaintColor_C : public A00_DirtyActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)
    FLinearColor Color;                                                               // 0x0278 (size: 0x10)
    float TraceDistance;                                                              // 0x0288 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_DirtyActor_PaintColor(int32 EntryPoint);
}; // Size: 0x28C

#endif
