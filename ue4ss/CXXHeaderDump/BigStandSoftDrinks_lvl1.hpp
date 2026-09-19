#ifndef UE4SS_SDK_BigStandSoftDrinks_lvl1_HPP
#define UE4SS_SDK_BigStandSoftDrinks_lvl1_HPP

class ABigStandSoftDrinks_lvl1_C : public A00_Stand_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    class USplineComponent* Spline36;                                                 // 0x06E8 (size: 0x8)
    class USplineComponent* Spline35;                                                 // 0x06F0 (size: 0x8)
    class USplineComponent* Spline34;                                                 // 0x06F8 (size: 0x8)
    class USplineComponent* Spline33;                                                 // 0x0700 (size: 0x8)
    class USplineComponent* Spline32;                                                 // 0x0708 (size: 0x8)
    class USplineComponent* Spline31;                                                 // 0x0710 (size: 0x8)
    class USplineComponent* Spline30;                                                 // 0x0718 (size: 0x8)
    class USplineComponent* Spline29;                                                 // 0x0720 (size: 0x8)
    class USplineComponent* Spline28;                                                 // 0x0728 (size: 0x8)
    class USplineComponent* Spline27;                                                 // 0x0730 (size: 0x8)
    class USplineComponent* Spline26;                                                 // 0x0738 (size: 0x8)
    class USplineComponent* Spline25;                                                 // 0x0740 (size: 0x8)
    class USplineComponent* Spline24;                                                 // 0x0748 (size: 0x8)
    class USplineComponent* Spline23;                                                 // 0x0750 (size: 0x8)
    class USplineComponent* Spline22;                                                 // 0x0758 (size: 0x8)
    class USplineComponent* Spline21;                                                 // 0x0760 (size: 0x8)
    class USplineComponent* Spline20;                                                 // 0x0768 (size: 0x8)
    class USplineComponent* Spline19;                                                 // 0x0770 (size: 0x8)
    class USplineComponent* Spline18;                                                 // 0x0778 (size: 0x8)
    class USplineComponent* Spline17;                                                 // 0x0780 (size: 0x8)
    class USplineComponent* Spline16;                                                 // 0x0788 (size: 0x8)
    class USplineComponent* Spline15;                                                 // 0x0790 (size: 0x8)
    class USplineComponent* Spline14;                                                 // 0x0798 (size: 0x8)
    class USplineComponent* Spline13;                                                 // 0x07A0 (size: 0x8)
    class USplineComponent* Spline12;                                                 // 0x07A8 (size: 0x8)
    class USplineComponent* Spline11;                                                 // 0x07B0 (size: 0x8)
    class USplineComponent* Spline10;                                                 // 0x07B8 (size: 0x8)
    class USplineComponent* Spline9;                                                  // 0x07C0 (size: 0x8)
    class USplineComponent* Spline8;                                                  // 0x07C8 (size: 0x8)
    class USplineComponent* Spline2;                                                  // 0x07D0 (size: 0x8)
    class USplineComponent* Spline6;                                                  // 0x07D8 (size: 0x8)
    class USplineComponent* Spline5;                                                  // 0x07E0 (size: 0x8)
    class USplineComponent* Spline4;                                                  // 0x07E8 (size: 0x8)
    class USplineComponent* Spline3;                                                  // 0x07F0 (size: 0x8)
    class USplineComponent* Spline1;                                                  // 0x07F8 (size: 0x8)
    class USplineComponent* Spline7;                                                  // 0x0800 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x0808 (size: 0x8)
    class UStaticMeshComponent* Plane1;                                               // 0x0810 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0818 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0820 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BigStandSoftDrinks_lvl1(int32 EntryPoint);
}; // Size: 0x828

#endif
