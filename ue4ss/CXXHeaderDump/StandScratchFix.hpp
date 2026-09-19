#ifndef UE4SS_SDK_StandScratchFix_HPP
#define UE4SS_SDK_StandScratchFix_HPP

class AStandScratchFix_C : public A00_Stand_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    class USplineComponent* Spline9;                                                  // 0x06E8 (size: 0x8)
    class USplineComponent* Spline8;                                                  // 0x06F0 (size: 0x8)
    class USplineComponent* Spline7;                                                  // 0x06F8 (size: 0x8)
    class USplineComponent* Spline6;                                                  // 0x0700 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_StandScratchFix(int32 EntryPoint);
}; // Size: 0x708

#endif
