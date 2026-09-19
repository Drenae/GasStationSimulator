#ifndef UE4SS_SDK_BigStandTire_HPP
#define UE4SS_SDK_BigStandTire_HPP

class ABigStandTire_C : public A00_Stand_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    class USplineComponent* Spline3;                                                  // 0x06E8 (size: 0x8)
    class USplineComponent* Spline2;                                                  // 0x06F0 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x06F8 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BigStandTire(int32 EntryPoint);
}; // Size: 0x700

#endif
