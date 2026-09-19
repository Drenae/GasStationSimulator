#ifndef UE4SS_SDK_BigStandFood_lvl1_HPP
#define UE4SS_SDK_BigStandFood_lvl1_HPP

class ABigStandFood_lvl1_C : public A00_Stand_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    class USplineComponent* Spline53;                                                 // 0x06E8 (size: 0x8)
    class USplineComponent* Spline52;                                                 // 0x06F0 (size: 0x8)
    class USplineComponent* Spline51;                                                 // 0x06F8 (size: 0x8)
    class USplineComponent* Spline50;                                                 // 0x0700 (size: 0x8)
    class USplineComponent* Spline49;                                                 // 0x0708 (size: 0x8)
    class USplineComponent* Spline48;                                                 // 0x0710 (size: 0x8)
    class USplineComponent* Spline47;                                                 // 0x0718 (size: 0x8)
    class USplineComponent* Spline46;                                                 // 0x0720 (size: 0x8)
    class USplineComponent* Spline45;                                                 // 0x0728 (size: 0x8)
    class USplineComponent* Spline44;                                                 // 0x0730 (size: 0x8)
    class USplineComponent* Spline43;                                                 // 0x0738 (size: 0x8)
    class USplineComponent* Spline3;                                                  // 0x0740 (size: 0x8)
    class USplineComponent* Spline42;                                                 // 0x0748 (size: 0x8)
    class USplineComponent* Spline41;                                                 // 0x0750 (size: 0x8)
    class USplineComponent* Spline40;                                                 // 0x0758 (size: 0x8)
    class USplineComponent* Spline39;                                                 // 0x0760 (size: 0x8)
    class USplineComponent* Spline38;                                                 // 0x0768 (size: 0x8)
    class USplineComponent* Spline37;                                                 // 0x0770 (size: 0x8)
    class USplineComponent* Spline36;                                                 // 0x0778 (size: 0x8)
    class USplineComponent* Spline35;                                                 // 0x0780 (size: 0x8)
    class USplineComponent* Spline34;                                                 // 0x0788 (size: 0x8)
    class USplineComponent* Spline33;                                                 // 0x0790 (size: 0x8)
    class USplineComponent* Spline32;                                                 // 0x0798 (size: 0x8)
    class USplineComponent* Spline31;                                                 // 0x07A0 (size: 0x8)
    class USplineComponent* Spline24;                                                 // 0x07A8 (size: 0x8)
    class USplineComponent* Spline2;                                                  // 0x07B0 (size: 0x8)
    class USplineComponent* Spline30;                                                 // 0x07B8 (size: 0x8)
    class USplineComponent* Spline29;                                                 // 0x07C0 (size: 0x8)
    class USplineComponent* Spline28;                                                 // 0x07C8 (size: 0x8)
    class USplineComponent* Spline27;                                                 // 0x07D0 (size: 0x8)
    class USplineComponent* Spline26;                                                 // 0x07D8 (size: 0x8)
    class USplineComponent* Spline25;                                                 // 0x07E0 (size: 0x8)
    class USplineComponent* Spline18;                                                 // 0x07E8 (size: 0x8)
    class USplineComponent* Spline23;                                                 // 0x07F0 (size: 0x8)
    class USplineComponent* Spline22;                                                 // 0x07F8 (size: 0x8)
    class USplineComponent* Spline21;                                                 // 0x0800 (size: 0x8)
    class USplineComponent* Spline20;                                                 // 0x0808 (size: 0x8)
    class USplineComponent* Spline19;                                                 // 0x0810 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x0818 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BigStandFood_lvl1(int32 EntryPoint);
}; // Size: 0x820

#endif
