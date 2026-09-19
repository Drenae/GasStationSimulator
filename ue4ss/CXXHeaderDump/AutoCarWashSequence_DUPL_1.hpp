#ifndef UE4SS_SDK_AutoCarWashSequence_DUPL_1_HPP
#define UE4SS_SDK_AutoCarWashSequence_DUPL_1_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    class ACarWashPistol* CarWashPistol;                                              // 0x0040 (size: 0x8)
    class UStaticMeshComponent* Frame;                                                // 0x0048 (size: 0x8)
    FVector StartingVectorOffsetTop;                                                  // 0x0050 (size: 0xC)
    FVector StartingVectorOffsetRight;                                                // 0x005C (size: 0xC)
    FVector StartingVectorOffsetLeft;                                                 // 0x0068 (size: 0xC)
    int32 ViewDistanceQuality;                                                        // 0x0074 (size: 0x4)

    void SequenceEvent__ENTRYPOINTSequenceDirector_2();
    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void Trace1();
    void Trace2();
    void TraceWashingTop(int32 Amount, float Offset, FVector Start, FVector Direction);
    void TraceWashingSide(int32 Amount, float Offset, FVector Start, FVector Direction, FVector SprayDirection);
    void Start();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x78

#endif
