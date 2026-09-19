#ifndef UE4SS_SDK_SmallStandCoolantFluid_HPP
#define UE4SS_SDK_SmallStandCoolantFluid_HPP

class ASmallStandCoolantFluid_C : public A00_Stand_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    class USplineComponent* Spline23;                                                 // 0x06E8 (size: 0x8)
    class USplineComponent* Spline3;                                                  // 0x06F0 (size: 0x8)
    class USplineComponent* Spline26;                                                 // 0x06F8 (size: 0x8)
    class USplineComponent* Spline25;                                                 // 0x0700 (size: 0x8)
    class USplineComponent* Spline2;                                                  // 0x0708 (size: 0x8)
    class USplineComponent* Spline21;                                                 // 0x0710 (size: 0x8)
    class USplineComponent* Spline22;                                                 // 0x0718 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x0720 (size: 0x8)
    class USplineComponent* Spline24;                                                 // 0x0728 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SmallStandCoolantFluid(int32 EntryPoint);
}; // Size: 0x730

#endif
