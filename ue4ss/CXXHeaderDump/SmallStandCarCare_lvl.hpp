#ifndef UE4SS_SDK_SmallStandCarCare_lvl_HPP
#define UE4SS_SDK_SmallStandCarCare_lvl_HPP

class ASmallStandCarCare_lvl_C : public A00_Stand_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    class USplineComponent* Spline21;                                                 // 0x06E8 (size: 0x8)
    class USplineComponent* Spline20;                                                 // 0x06F0 (size: 0x8)
    class USplineComponent* Spline19;                                                 // 0x06F8 (size: 0x8)
    class USplineComponent* Spline18;                                                 // 0x0700 (size: 0x8)
    class USplineComponent* Spline17;                                                 // 0x0708 (size: 0x8)
    class USplineComponent* Spline16;                                                 // 0x0710 (size: 0x8)
    class USplineComponent* Spline15;                                                 // 0x0718 (size: 0x8)
    class USplineComponent* Spline14;                                                 // 0x0720 (size: 0x8)
    class USplineComponent* Spline13;                                                 // 0x0728 (size: 0x8)
    class USplineComponent* Spline12;                                                 // 0x0730 (size: 0x8)
    class USplineComponent* Spline11;                                                 // 0x0738 (size: 0x8)
    class USplineComponent* Spline10;                                                 // 0x0740 (size: 0x8)
    class USplineComponent* Spline9;                                                  // 0x0748 (size: 0x8)
    class USplineComponent* Spline8;                                                  // 0x0750 (size: 0x8)
    class USplineComponent* Spline7;                                                  // 0x0758 (size: 0x8)
    class USplineComponent* Spline6;                                                  // 0x0760 (size: 0x8)
    class USplineComponent* Spline3;                                                  // 0x0768 (size: 0x8)
    class USplineComponent* Spline2;                                                  // 0x0770 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x0778 (size: 0x8)
    class USplineComponent* Spline5;                                                  // 0x0780 (size: 0x8)
    class USplineComponent* Spline4;                                                  // 0x0788 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_SmallStandCarCare_lvl(int32 EntryPoint);
}; // Size: 0x790

#endif
